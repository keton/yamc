/*
  File autogenerated by gengetopt version 2.22.6
  generated with the following command:
  gengetopt -i ./examples/yamc_pub.ggo --output-dir=./examples -f yamc_pub_cmd_parser -a yamc_pub_args_info -F yamc_pub_cmdline --default-optional --no-handle-error

  The developers of gengetopt consider the fixed text that goes in all
  gengetopt output files to be in the public domain:
  we make no copyright claims on it.
*/

/* If we use autoconf.  */
#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#ifndef FIX_UNUSED
#define FIX_UNUSED(X) (void) (X) /* avoid warnings for unused params */
#endif

#include <getopt.h>

#include "yamc_pub_cmdline.h"

const char *yamc_pub_args_info_purpose = "";

const char *yamc_pub_args_info_usage = "Usage: yamc_pub {-h hostname} {-p port} -t topic {-m message} -q qos_level {-c\nclientId}";

const char *yamc_pub_args_info_versiontext = "yamc_pub is a simple MQTT client. It will publish single message and exit.\n\nYAMC (Yet Another MQTT Client) is released under MIT License by Michal Lower\n<https://github.com/keton/yamc>.";

const char *yamc_pub_args_info_description = "";

const char *yamc_pub_args_info_help[] = {
  "      --help                    Print help and exit",
  "  -V, --version                 Print version and exit",
  "  -h, --host=hostname           host to connect to.  (default=`localhost')",
  "  -p, --port=portno             port to connect to.  (default=`1883')",
  "  -u, --user=username           User name to login to host",
  "  -P, --password=password       Password to login to host",
  "  -t, --topic=mqtt_topic        MQTT topic to publish message to.",
  "  -m, --message=message_content MQTT message to publish.",
  "  -c, --client-id=client_id     MQTT Client ID",
  "  -q, --qos=qos_level           QoS level for the message.  (possible\n                                  values=\"0\", \"1\", \"2\" default=`0')",
  "  -N, --no-clean-session        Specify this to disable clean session flag.\n                                  (default=off)",
  "      --keepalive-timeout=keepalive_timeout\n                                Session keep alive timeout in seconds.\n                                  (default=`30')",
  "      --will-topic=message_topic\n                                MQTT will topic.",
  "      --will-msg=message_content\n                                MQTT will message.",
  "  -W, --will-remain             Specify this to enable will remain flag.\n                                  (default=off)",
  "      --will-qos=qos_level      QoS level for the message.  (possible\n                                  values=\"0\", \"1\", \"2\" default=`0')",
    0
};

typedef enum {ARG_NO
  , ARG_FLAG
  , ARG_STRING
  , ARG_SHORT
} yamc_pub_cmd_parser_arg_type;

static
void clear_given (struct yamc_pub_args_info *args_info);
static
void clear_args (struct yamc_pub_args_info *args_info);

static int
yamc_pub_cmd_parser_internal (int argc, char **argv, struct yamc_pub_args_info *args_info,
                        struct yamc_pub_cmd_parser_params *params, const char *additional_error);

static int
yamc_pub_cmd_parser_required2 (struct yamc_pub_args_info *args_info, const char *prog_name, const char *additional_error);

const char *yamc_pub_cmd_parser_qos_values[] = {"0", "1", "2", 0}; /*< Possible values for qos. */
const char *yamc_pub_cmd_parser_will_qos_values[] = {"0", "1", "2", 0}; /*< Possible values for will-qos. */

static char *
gengetopt_strdup (const char *s);

static
void clear_given (struct yamc_pub_args_info *args_info)
{
  args_info->help_given = 0 ;
  args_info->version_given = 0 ;
  args_info->host_given = 0 ;
  args_info->port_given = 0 ;
  args_info->user_given = 0 ;
  args_info->password_given = 0 ;
  args_info->topic_given = 0 ;
  args_info->message_given = 0 ;
  args_info->client_id_given = 0 ;
  args_info->qos_given = 0 ;
  args_info->no_clean_session_given = 0 ;
  args_info->keepalive_timeout_given = 0 ;
  args_info->will_topic_given = 0 ;
  args_info->will_msg_given = 0 ;
  args_info->will_remain_given = 0 ;
  args_info->will_qos_given = 0 ;
}

static
void clear_args (struct yamc_pub_args_info *args_info)
{
  FIX_UNUSED (args_info);
  args_info->host_arg = gengetopt_strdup ("localhost");
  args_info->host_orig = NULL;
  args_info->port_arg = 1883;
  args_info->port_orig = NULL;
  args_info->user_arg = NULL;
  args_info->user_orig = NULL;
  args_info->password_arg = NULL;
  args_info->password_orig = NULL;
  args_info->topic_arg = NULL;
  args_info->topic_orig = NULL;
  args_info->message_arg = NULL;
  args_info->message_orig = NULL;
  args_info->client_id_arg = NULL;
  args_info->client_id_orig = NULL;
  args_info->qos_arg = 0;
  args_info->qos_orig = NULL;
  args_info->no_clean_session_flag = 0;
  args_info->keepalive_timeout_arg = 30;
  args_info->keepalive_timeout_orig = NULL;
  args_info->will_topic_arg = NULL;
  args_info->will_topic_orig = NULL;
  args_info->will_msg_arg = NULL;
  args_info->will_msg_orig = NULL;
  args_info->will_remain_flag = 0;
  args_info->will_qos_arg = 0;
  args_info->will_qos_orig = NULL;
  
}

static
void init_args_info(struct yamc_pub_args_info *args_info)
{


  args_info->help_help = yamc_pub_args_info_help[0] ;
  args_info->version_help = yamc_pub_args_info_help[1] ;
  args_info->host_help = yamc_pub_args_info_help[2] ;
  args_info->port_help = yamc_pub_args_info_help[3] ;
  args_info->user_help = yamc_pub_args_info_help[4] ;
  args_info->password_help = yamc_pub_args_info_help[5] ;
  args_info->topic_help = yamc_pub_args_info_help[6] ;
  args_info->message_help = yamc_pub_args_info_help[7] ;
  args_info->client_id_help = yamc_pub_args_info_help[8] ;
  args_info->qos_help = yamc_pub_args_info_help[9] ;
  args_info->no_clean_session_help = yamc_pub_args_info_help[10] ;
  args_info->keepalive_timeout_help = yamc_pub_args_info_help[11] ;
  args_info->will_topic_help = yamc_pub_args_info_help[12] ;
  args_info->will_msg_help = yamc_pub_args_info_help[13] ;
  args_info->will_remain_help = yamc_pub_args_info_help[14] ;
  args_info->will_qos_help = yamc_pub_args_info_help[15] ;
  
}

void
yamc_pub_cmd_parser_print_version (void)
{
  printf ("%s %s\n",
     (strlen(YAMC_PUB_CMD_PARSER_PACKAGE_NAME) ? YAMC_PUB_CMD_PARSER_PACKAGE_NAME : YAMC_PUB_CMD_PARSER_PACKAGE),
     YAMC_PUB_CMD_PARSER_VERSION);

  if (strlen(yamc_pub_args_info_versiontext) > 0)
    printf("\n%s\n", yamc_pub_args_info_versiontext);
}

static void print_help_common(void) {
  yamc_pub_cmd_parser_print_version ();

  if (strlen(yamc_pub_args_info_purpose) > 0)
    printf("\n%s\n", yamc_pub_args_info_purpose);

  if (strlen(yamc_pub_args_info_usage) > 0)
    printf("\n%s\n", yamc_pub_args_info_usage);

  printf("\n");

  if (strlen(yamc_pub_args_info_description) > 0)
    printf("%s\n\n", yamc_pub_args_info_description);
}

void
yamc_pub_cmd_parser_print_help (void)
{
  int i = 0;
  print_help_common();
  while (yamc_pub_args_info_help[i])
    printf("%s\n", yamc_pub_args_info_help[i++]);
}

void
yamc_pub_cmd_parser_init (struct yamc_pub_args_info *args_info)
{
  clear_given (args_info);
  clear_args (args_info);
  init_args_info (args_info);
}

void
yamc_pub_cmd_parser_params_init(struct yamc_pub_cmd_parser_params *params)
{
  if (params)
    { 
      params->override = 0;
      params->initialize = 1;
      params->check_required = 1;
      params->check_ambiguity = 0;
      params->print_errors = 1;
    }
}

struct yamc_pub_cmd_parser_params *
yamc_pub_cmd_parser_params_create(void)
{
  struct yamc_pub_cmd_parser_params *params = 
    (struct yamc_pub_cmd_parser_params *)malloc(sizeof(struct yamc_pub_cmd_parser_params));
  yamc_pub_cmd_parser_params_init(params);  
  return params;
}

static void
free_string_field (char **s)
{
  if (*s)
    {
      free (*s);
      *s = 0;
    }
}


static void
yamc_pub_cmd_parser_release (struct yamc_pub_args_info *args_info)
{

  free_string_field (&(args_info->host_arg));
  free_string_field (&(args_info->host_orig));
  free_string_field (&(args_info->port_orig));
  free_string_field (&(args_info->user_arg));
  free_string_field (&(args_info->user_orig));
  free_string_field (&(args_info->password_arg));
  free_string_field (&(args_info->password_orig));
  free_string_field (&(args_info->topic_arg));
  free_string_field (&(args_info->topic_orig));
  free_string_field (&(args_info->message_arg));
  free_string_field (&(args_info->message_orig));
  free_string_field (&(args_info->client_id_arg));
  free_string_field (&(args_info->client_id_orig));
  free_string_field (&(args_info->qos_orig));
  free_string_field (&(args_info->keepalive_timeout_orig));
  free_string_field (&(args_info->will_topic_arg));
  free_string_field (&(args_info->will_topic_orig));
  free_string_field (&(args_info->will_msg_arg));
  free_string_field (&(args_info->will_msg_orig));
  free_string_field (&(args_info->will_qos_orig));
  
  

  clear_given (args_info);
}

/**
 * @param val the value to check
 * @param values the possible values
 * @return the index of the matched value:
 * -1 if no value matched,
 * -2 if more than one value has matched
 */
static int
check_possible_values(const char *val, const char *values[])
{
  int i, found, last;
  size_t len;

  if (!val)   /* otherwise strlen() crashes below */
    return -1; /* -1 means no argument for the option */

  found = last = 0;

  for (i = 0, len = strlen(val); values[i]; ++i)
    {
      if (strncmp(val, values[i], len) == 0)
        {
          ++found;
          last = i;
          if (strlen(values[i]) == len)
            return i; /* exact macth no need to check more */
        }
    }

  if (found == 1) /* one match: OK */
    return last;

  return (found ? -2 : -1); /* return many values or none matched */
}


static void
write_into_file(FILE *outfile, const char *opt, const char *arg, const char *values[])
{
  int found = -1;
  if (arg) {
    if (values) {
      found = check_possible_values(arg, values);      
    }
    if (found >= 0)
      fprintf(outfile, "%s=\"%s\" # %s\n", opt, arg, values[found]);
    else
      fprintf(outfile, "%s=\"%s\"\n", opt, arg);
  } else {
    fprintf(outfile, "%s\n", opt);
  }
}


int
yamc_pub_cmd_parser_dump(FILE *outfile, struct yamc_pub_args_info *args_info)
{
  int i = 0;

  if (!outfile)
    {
      fprintf (stderr, "%s: cannot dump options to stream\n", YAMC_PUB_CMD_PARSER_PACKAGE);
      return EXIT_FAILURE;
    }

  if (args_info->help_given)
    write_into_file(outfile, "help", 0, 0 );
  if (args_info->version_given)
    write_into_file(outfile, "version", 0, 0 );
  if (args_info->host_given)
    write_into_file(outfile, "host", args_info->host_orig, 0);
  if (args_info->port_given)
    write_into_file(outfile, "port", args_info->port_orig, 0);
  if (args_info->user_given)
    write_into_file(outfile, "user", args_info->user_orig, 0);
  if (args_info->password_given)
    write_into_file(outfile, "password", args_info->password_orig, 0);
  if (args_info->topic_given)
    write_into_file(outfile, "topic", args_info->topic_orig, 0);
  if (args_info->message_given)
    write_into_file(outfile, "message", args_info->message_orig, 0);
  if (args_info->client_id_given)
    write_into_file(outfile, "client-id", args_info->client_id_orig, 0);
  if (args_info->qos_given)
    write_into_file(outfile, "qos", args_info->qos_orig, yamc_pub_cmd_parser_qos_values);
  if (args_info->no_clean_session_given)
    write_into_file(outfile, "no-clean-session", 0, 0 );
  if (args_info->keepalive_timeout_given)
    write_into_file(outfile, "keepalive-timeout", args_info->keepalive_timeout_orig, 0);
  if (args_info->will_topic_given)
    write_into_file(outfile, "will-topic", args_info->will_topic_orig, 0);
  if (args_info->will_msg_given)
    write_into_file(outfile, "will-msg", args_info->will_msg_orig, 0);
  if (args_info->will_remain_given)
    write_into_file(outfile, "will-remain", 0, 0 );
  if (args_info->will_qos_given)
    write_into_file(outfile, "will-qos", args_info->will_qos_orig, yamc_pub_cmd_parser_will_qos_values);
  

  i = EXIT_SUCCESS;
  return i;
}

int
yamc_pub_cmd_parser_file_save(const char *filename, struct yamc_pub_args_info *args_info)
{
  FILE *outfile;
  int i = 0;

  outfile = fopen(filename, "w");

  if (!outfile)
    {
      fprintf (stderr, "%s: cannot open file for writing: %s\n", YAMC_PUB_CMD_PARSER_PACKAGE, filename);
      return EXIT_FAILURE;
    }

  i = yamc_pub_cmd_parser_dump(outfile, args_info);
  fclose (outfile);

  return i;
}

void
yamc_pub_cmd_parser_free (struct yamc_pub_args_info *args_info)
{
  yamc_pub_cmd_parser_release (args_info);
}

/** @brief replacement of strdup, which is not standard */
char *
gengetopt_strdup (const char *s)
{
  char *result = 0;
  if (!s)
    return result;

  result = (char*)malloc(strlen(s) + 1);
  if (result == (char*)0)
    return (char*)0;
  strcpy(result, s);
  return result;
}

int
yamc_pub_cmd_parser (int argc, char **argv, struct yamc_pub_args_info *args_info)
{
  return yamc_pub_cmd_parser2 (argc, argv, args_info, 0, 1, 1);
}

int
yamc_pub_cmd_parser_ext (int argc, char **argv, struct yamc_pub_args_info *args_info,
                   struct yamc_pub_cmd_parser_params *params)
{
  int result;
  result = yamc_pub_cmd_parser_internal (argc, argv, args_info, params, 0);

  return result;
}

int
yamc_pub_cmd_parser2 (int argc, char **argv, struct yamc_pub_args_info *args_info, int override, int initialize, int check_required)
{
  int result;
  struct yamc_pub_cmd_parser_params params;
  
  params.override = override;
  params.initialize = initialize;
  params.check_required = check_required;
  params.check_ambiguity = 0;
  params.print_errors = 1;

  result = yamc_pub_cmd_parser_internal (argc, argv, args_info, &params, 0);

  return result;
}

int
yamc_pub_cmd_parser_required (struct yamc_pub_args_info *args_info, const char *prog_name)
{
  int result = EXIT_SUCCESS;

  if (yamc_pub_cmd_parser_required2(args_info, prog_name, 0) > 0)
    result = EXIT_FAILURE;

  return result;
}

int
yamc_pub_cmd_parser_required2 (struct yamc_pub_args_info *args_info, const char *prog_name, const char *additional_error)
{
  int error_occurred = 0;
  FIX_UNUSED (additional_error);

  /* checks for required options */
  if (! args_info->topic_given)
    {
      fprintf (stderr, "%s: '--topic' ('-t') option required%s\n", prog_name, (additional_error ? additional_error : ""));
      error_occurred = 1;
    }
  
  
  /* checks for dependences among options */
  if (args_info->password_given && ! args_info->user_given)
    {
      fprintf (stderr, "%s: '--password' ('-P') option depends on option 'user'%s\n", prog_name, (additional_error ? additional_error : ""));
      error_occurred = 1;
    }
  if (args_info->will_msg_given && ! args_info->will_topic_given)
    {
      fprintf (stderr, "%s: '--will-msg' option depends on option 'will-topic'%s\n", prog_name, (additional_error ? additional_error : ""));
      error_occurred = 1;
    }
  if (args_info->will_remain_given && ! args_info->will_msg_given)
    {
      fprintf (stderr, "%s: '--will-remain' ('-W') option depends on option 'will-msg'%s\n", prog_name, (additional_error ? additional_error : ""));
      error_occurred = 1;
    }
  if (args_info->will_qos_given && ! args_info->will_msg_given)
    {
      fprintf (stderr, "%s: '--will-qos' option depends on option 'will-msg'%s\n", prog_name, (additional_error ? additional_error : ""));
      error_occurred = 1;
    }

  return error_occurred;
}


static char *package_name = 0;

/**
 * @brief updates an option
 * @param field the generic pointer to the field to update
 * @param orig_field the pointer to the orig field
 * @param field_given the pointer to the number of occurrence of this option
 * @param prev_given the pointer to the number of occurrence already seen
 * @param value the argument for this option (if null no arg was specified)
 * @param possible_values the possible values for this option (if specified)
 * @param default_value the default value (in case the option only accepts fixed values)
 * @param arg_type the type of this option
 * @param check_ambiguity @see yamc_pub_cmd_parser_params.check_ambiguity
 * @param override @see yamc_pub_cmd_parser_params.override
 * @param no_free whether to free a possible previous value
 * @param multiple_option whether this is a multiple option
 * @param long_opt the corresponding long option
 * @param short_opt the corresponding short option (or '-' if none)
 * @param additional_error possible further error specification
 */
static
int update_arg(void *field, char **orig_field,
               unsigned int *field_given, unsigned int *prev_given, 
               char *value, const char *possible_values[],
               const char *default_value,
               yamc_pub_cmd_parser_arg_type arg_type,
               int check_ambiguity, int override,
               int no_free, int multiple_option,
               const char *long_opt, char short_opt,
               const char *additional_error)
{
  char *stop_char = 0;
  const char *val = value;
  int found;
  char **string_field;
  FIX_UNUSED (field);

  stop_char = 0;
  found = 0;

  if (!multiple_option && prev_given && (*prev_given || (check_ambiguity && *field_given)))
    {
      if (short_opt != '-')
        fprintf (stderr, "%s: `--%s' (`-%c') option given more than once%s\n", 
               package_name, long_opt, short_opt,
               (additional_error ? additional_error : ""));
      else
        fprintf (stderr, "%s: `--%s' option given more than once%s\n", 
               package_name, long_opt,
               (additional_error ? additional_error : ""));
      return 1; /* failure */
    }

  if (possible_values && (found = check_possible_values((value ? value : default_value), possible_values)) < 0)
    {
      if (short_opt != '-')
        fprintf (stderr, "%s: %s argument, \"%s\", for option `--%s' (`-%c')%s\n", 
          package_name, (found == -2) ? "ambiguous" : "invalid", value, long_opt, short_opt,
          (additional_error ? additional_error : ""));
      else
        fprintf (stderr, "%s: %s argument, \"%s\", for option `--%s'%s\n", 
          package_name, (found == -2) ? "ambiguous" : "invalid", value, long_opt,
          (additional_error ? additional_error : ""));
      return 1; /* failure */
    }
    
  if (field_given && *field_given && ! override)
    return 0;
  if (prev_given)
    (*prev_given)++;
  if (field_given)
    (*field_given)++;
  if (possible_values)
    val = possible_values[found];

  switch(arg_type) {
  case ARG_FLAG:
    *((int *)field) = !*((int *)field);
    break;
  case ARG_SHORT:
    if (val) *((short *)field) = (short)strtol (val, &stop_char, 0);
    break;
  case ARG_STRING:
    if (val) {
      string_field = (char **)field;
      if (!no_free && *string_field)
        free (*string_field); /* free previous string */
      *string_field = gengetopt_strdup (val);
    }
    break;
  default:
    break;
  };

  /* check numeric conversion */
  switch(arg_type) {
  case ARG_SHORT:
    if (val && !(stop_char && *stop_char == '\0')) {
      fprintf(stderr, "%s: invalid numeric value: %s\n", package_name, val);
      return 1; /* failure */
    }
    break;
  default:
    ;
  };

  /* store the original value */
  switch(arg_type) {
  case ARG_NO:
  case ARG_FLAG:
    break;
  default:
    if (value && orig_field) {
      if (no_free) {
        *orig_field = value;
      } else {
        if (*orig_field)
          free (*orig_field); /* free previous string */
        *orig_field = gengetopt_strdup (value);
      }
    }
  };

  return 0; /* OK */
}


int
yamc_pub_cmd_parser_internal (
  int argc, char **argv, struct yamc_pub_args_info *args_info,
                        struct yamc_pub_cmd_parser_params *params, const char *additional_error)
{
  int c;	/* Character of the parsed option.  */

  int error_occurred = 0;
  struct yamc_pub_args_info local_args_info;
  
  int override;
  int initialize;
  int check_required;
  int check_ambiguity;
  
  package_name = argv[0];
  
  override = params->override;
  initialize = params->initialize;
  check_required = params->check_required;
  check_ambiguity = params->check_ambiguity;

  if (initialize)
    yamc_pub_cmd_parser_init (args_info);

  yamc_pub_cmd_parser_init (&local_args_info);

  optarg = 0;
  optind = 0;
  opterr = params->print_errors;
  optopt = '?';

  while (1)
    {
      int option_index = 0;

      static struct option long_options[] = {
        { "help",	0, NULL, 0 },
        { "version",	0, NULL, 'V' },
        { "host",	1, NULL, 'h' },
        { "port",	1, NULL, 'p' },
        { "user",	1, NULL, 'u' },
        { "password",	1, NULL, 'P' },
        { "topic",	1, NULL, 't' },
        { "message",	1, NULL, 'm' },
        { "client-id",	1, NULL, 'c' },
        { "qos",	1, NULL, 'q' },
        { "no-clean-session",	0, NULL, 'N' },
        { "keepalive-timeout",	1, NULL, 0 },
        { "will-topic",	1, NULL, 0 },
        { "will-msg",	1, NULL, 0 },
        { "will-remain",	0, NULL, 'W' },
        { "will-qos",	1, NULL, 0 },
        { 0,  0, 0, 0 }
      };

      c = getopt_long (argc, argv, "Vh:p:u:P:t:m:c:q:NW", long_options, &option_index);

      if (c == -1) break;	/* Exit from `while (1)' loop.  */

      switch (c)
        {
        case 'V':	/* Print version and exit.  */
          yamc_pub_cmd_parser_print_version ();
          yamc_pub_cmd_parser_free (&local_args_info);
          exit (EXIT_SUCCESS);

        case 'h':	/* host to connect to..  */
        
        
          if (update_arg( (void *)&(args_info->host_arg), 
               &(args_info->host_orig), &(args_info->host_given),
              &(local_args_info.host_given), optarg, 0, "localhost", ARG_STRING,
              check_ambiguity, override, 0, 0,
              "host", 'h',
              additional_error))
            goto failure;
        
          break;
        case 'p':	/* port to connect to..  */
        
        
          if (update_arg( (void *)&(args_info->port_arg), 
               &(args_info->port_orig), &(args_info->port_given),
              &(local_args_info.port_given), optarg, 0, "1883", ARG_SHORT,
              check_ambiguity, override, 0, 0,
              "port", 'p',
              additional_error))
            goto failure;
        
          break;
        case 'u':	/* User name to login to host.  */
        
        
          if (update_arg( (void *)&(args_info->user_arg), 
               &(args_info->user_orig), &(args_info->user_given),
              &(local_args_info.user_given), optarg, 0, 0, ARG_STRING,
              check_ambiguity, override, 0, 0,
              "user", 'u',
              additional_error))
            goto failure;
        
          break;
        case 'P':	/* Password to login to host.  */
        
        
          if (update_arg( (void *)&(args_info->password_arg), 
               &(args_info->password_orig), &(args_info->password_given),
              &(local_args_info.password_given), optarg, 0, 0, ARG_STRING,
              check_ambiguity, override, 0, 0,
              "password", 'P',
              additional_error))
            goto failure;
        
          break;
        case 't':	/* MQTT topic to publish message to..  */
        
        
          if (update_arg( (void *)&(args_info->topic_arg), 
               &(args_info->topic_orig), &(args_info->topic_given),
              &(local_args_info.topic_given), optarg, 0, 0, ARG_STRING,
              check_ambiguity, override, 0, 0,
              "topic", 't',
              additional_error))
            goto failure;
        
          break;
        case 'm':	/* MQTT message to publish..  */
        
        
          if (update_arg( (void *)&(args_info->message_arg), 
               &(args_info->message_orig), &(args_info->message_given),
              &(local_args_info.message_given), optarg, 0, 0, ARG_STRING,
              check_ambiguity, override, 0, 0,
              "message", 'm',
              additional_error))
            goto failure;
        
          break;
        case 'c':	/* MQTT Client ID.  */
        
        
          if (update_arg( (void *)&(args_info->client_id_arg), 
               &(args_info->client_id_orig), &(args_info->client_id_given),
              &(local_args_info.client_id_given), optarg, 0, 0, ARG_STRING,
              check_ambiguity, override, 0, 0,
              "client-id", 'c',
              additional_error))
            goto failure;
        
          break;
        case 'q':	/* QoS level for the message..  */
        
        
          if (update_arg( (void *)&(args_info->qos_arg), 
               &(args_info->qos_orig), &(args_info->qos_given),
              &(local_args_info.qos_given), optarg, yamc_pub_cmd_parser_qos_values, "0", ARG_SHORT,
              check_ambiguity, override, 0, 0,
              "qos", 'q',
              additional_error))
            goto failure;
        
          break;
        case 'N':	/* Specify this to disable clean session flag..  */
        
        
          if (update_arg((void *)&(args_info->no_clean_session_flag), 0, &(args_info->no_clean_session_given),
              &(local_args_info.no_clean_session_given), optarg, 0, 0, ARG_FLAG,
              check_ambiguity, override, 1, 0, "no-clean-session", 'N',
              additional_error))
            goto failure;
        
          break;
        case 'W':	/* Specify this to enable will remain flag..  */
        
        
          if (update_arg((void *)&(args_info->will_remain_flag), 0, &(args_info->will_remain_given),
              &(local_args_info.will_remain_given), optarg, 0, 0, ARG_FLAG,
              check_ambiguity, override, 1, 0, "will-remain", 'W',
              additional_error))
            goto failure;
        
          break;

        case 0:	/* Long option with no short option */
          if (strcmp (long_options[option_index].name, "help") == 0) {
            yamc_pub_cmd_parser_print_help ();
            yamc_pub_cmd_parser_free (&local_args_info);
            exit (EXIT_SUCCESS);
          }

          /* Session keep alive timeout in seconds..  */
          if (strcmp (long_options[option_index].name, "keepalive-timeout") == 0)
          {
          
          
            if (update_arg( (void *)&(args_info->keepalive_timeout_arg), 
                 &(args_info->keepalive_timeout_orig), &(args_info->keepalive_timeout_given),
                &(local_args_info.keepalive_timeout_given), optarg, 0, "30", ARG_SHORT,
                check_ambiguity, override, 0, 0,
                "keepalive-timeout", '-',
                additional_error))
              goto failure;
          
          }
          /* MQTT will topic..  */
          else if (strcmp (long_options[option_index].name, "will-topic") == 0)
          {
          
          
            if (update_arg( (void *)&(args_info->will_topic_arg), 
                 &(args_info->will_topic_orig), &(args_info->will_topic_given),
                &(local_args_info.will_topic_given), optarg, 0, 0, ARG_STRING,
                check_ambiguity, override, 0, 0,
                "will-topic", '-',
                additional_error))
              goto failure;
          
          }
          /* MQTT will message..  */
          else if (strcmp (long_options[option_index].name, "will-msg") == 0)
          {
          
          
            if (update_arg( (void *)&(args_info->will_msg_arg), 
                 &(args_info->will_msg_orig), &(args_info->will_msg_given),
                &(local_args_info.will_msg_given), optarg, 0, 0, ARG_STRING,
                check_ambiguity, override, 0, 0,
                "will-msg", '-',
                additional_error))
              goto failure;
          
          }
          /* QoS level for the message..  */
          else if (strcmp (long_options[option_index].name, "will-qos") == 0)
          {
          
          
            if (update_arg( (void *)&(args_info->will_qos_arg), 
                 &(args_info->will_qos_orig), &(args_info->will_qos_given),
                &(local_args_info.will_qos_given), optarg, yamc_pub_cmd_parser_will_qos_values, "0", ARG_SHORT,
                check_ambiguity, override, 0, 0,
                "will-qos", '-',
                additional_error))
              goto failure;
          
          }
          
          break;
        case '?':	/* Invalid option.  */
          /* `getopt_long' already printed an error message.  */
          goto failure;

        default:	/* bug: option not considered.  */
          fprintf (stderr, "%s: option unknown: %c%s\n", YAMC_PUB_CMD_PARSER_PACKAGE, c, (additional_error ? additional_error : ""));
          abort ();
        } /* switch */
    } /* while */



  if (check_required)
    {
      error_occurred += yamc_pub_cmd_parser_required2 (args_info, argv[0], additional_error);
    }

  yamc_pub_cmd_parser_release (&local_args_info);

  if ( error_occurred )
    return (EXIT_FAILURE);

  return 0;

failure:
  
  yamc_pub_cmd_parser_release (&local_args_info);
  return (EXIT_FAILURE);
}