// rea decompile_all
// name: SystemNative_ConvertErrorPalToPlatform
// address: 0x3f84eac
// body: available
// range: 0x3f84eac-0x3f84ed3 inclusive
// range: 0x3f84edc-0x3f84ee7 inclusive
// range: 0x3f8513c-0x3f8513f inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 SystemNative_ConvertErrorPalToPlatform(undefined8 param_1)

{
  switch((int)param_1) {
  case 0x10001:
    return 7;
  case 0x10002:
    return 0xd;
  case 0x10003:
    return 0x62;
  case 0x10004:
    return 99;
  case 0x10005:
    return 0x61;
  case 0x10006:
    return 0xb;
  case 0x10007:
    return 0x72;
  case 0x10008:
    return 9;
  case 0x10009:
    return 0x4a;
  case 0x1000a:
    return 0x10;
  case 0x1000b:
    return 0x7d;
  case 0x1000c:
    return 10;
  case 0x1000d:
    return 0x67;
  case 0x1000e:
    return 0x6f;
  case 0x1000f:
    return 0x68;
  case 0x10010:
    return 0x23;
  case 0x10011:
    return 0x59;
  case 0x10012:
    return 0x21;
  case 0x10013:
    return 0x7a;
  case 0x10014:
    return 0x11;
  case 0x10015:
    return 0xe;
  case 0x10016:
    return 0x1b;
  case 0x10017:
    return 0x71;
  case 0x10018:
    return 0x2b;
  case 0x10019:
    return 0x54;
  case 0x1001a:
    return 0x73;
  case 0x1001b:
    return 4;
  case 0x1001c:
    return 0x16;
  case 0x1001d:
    return 5;
  case 0x1001e:
    return 0x6a;
  case 0x1001f:
    return 0x15;
  case 0x10020:
    return 0x28;
  case 0x10021:
    return 0x18;
  case 0x10022:
    return 0x1f;
  case 0x10023:
    return 0x5a;
  case 0x10024:
    return 0x48;
  case 0x10025:
    return 0x24;
  case 0x10026:
    return 100;
  case 0x10027:
    return 0x66;
  case 0x10028:
    return 0x65;
  case 0x10029:
    return 0x17;
  case 0x1002a:
    return 0x69;
  case 0x1002b:
  case 0x10035:
  case 0x10036:
  case 0x1004c:
  case 0x10050:
  case 0x10051:
  case 0x10052:
  case 0x10053:
  case 0x10054:
  case 0x10055:
  case 0x10056:
  case 0x10057:
  case 0x10058:
  case 0x10059:
  case 0x1005a:
  case 0x1005b:
  case 0x1005c:
  case 0x1005d:
  case 0x1005f:
  case 0x10061:
  case 0x10062:
  case 0x10063:
  case 0x10064:
  case 0x10065:
  case 0x10066:
  case 0x10067:
  case 0x10068:
  case 0x10069:
  case 0x1006a:
  case 0x1006b:
  case 0x1006d:
  case 0x1006e:
  case 0x1006f:
    goto code_r0x03f84ee0;
  case 0x1002c:
    return 0x13;
  case 0x1002d:
    return 2;
  case 0x1002e:
    return 8;
  case 0x1002f:
    return 0x25;
  case 0x10030:
    return 0x43;
  case 0x10031:
    return 0xc;
  case 0x10032:
    return 0x2a;
  case 0x10033:
    return 0x5c;
  case 0x10034:
    return 0x1c;
  case 0x10037:
    return 0x26;
  case 0x10038:
    return 0x6b;
  case 0x10039:
    return 0x14;
  case 0x1003a:
    return 0x27;
  case 0x1003b:
    return 0x83;
  case 0x1003c:
    return 0x58;
  case 0x1003d:
    return 0x5f;
  case 0x1003e:
    return 0x19;
  case 0x1003f:
    return 6;
  case 0x10040:
    return 0x4b;
  case 0x10041:
    return 0x82;
  case 0x10042:
    return 1;
  case 0x10043:
    return 0x20;
  case 0x10044:
    return 0x47;
  case 0x10045:
    return 0x5d;
  case 0x10046:
    return 0x5b;
  case 0x10047:
    return 0x22;
  case 0x10048:
    return 0x1e;
  case 0x10049:
    return 0x1d;
  case 0x1004a:
    return 3;
  case 0x1004b:
    return 0x74;
  case 0x1004d:
    return 0x6e;
  case 0x1004e:
    return 0x1a;
  case 0x1004f:
    return 0x12;
  case 0x1005e:
    return 0x5e;
  case 0x10060:
    return 0x60;
  case 0x1006c:
    return 0x6c;
  case 0x10070:
    return 0x70;
  case 0x10071:
    return 0x3d;
  default:
    if ((int)param_1 == 0) {
      return param_1;
    }
code_r0x03f84ee0:
    return 0xffffffff;
  }
}

