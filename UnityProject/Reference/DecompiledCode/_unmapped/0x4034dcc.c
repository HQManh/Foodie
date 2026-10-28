// rea decompile_all
// name: FUN_04034dcc
// address: 0x4034dcc
// body: available
// range: 0x4034dcc-0x4034f7b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_04034dcc(long *param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  
  pbVar3 = (byte *)*param_1;
  pbVar1 = (byte *)param_1[1];
  if (pbVar3 == pbVar1) {
    return 1;
  }
  if (*pbVar3 == 0x68) {
    pbVar2 = pbVar3 + 1;
    *param_1 = (long)pbVar2;
    if (pbVar2 == pbVar1) {
      return 1;
    }
    pbVar4 = pbVar2;
    if (*pbVar2 == 0x6e) {
      pbVar4 = pbVar3 + 2;
      *param_1 = (long)pbVar4;
    }
    if (pbVar1 == pbVar4) {
      return 1;
    }
    if (*pbVar4 - 0x3a < 0xfffffff6) {
      return 1;
    }
    do {
      pbVar3 = pbVar4;
      if (*pbVar4 - 0x3a < 0xfffffff6) break;
      pbVar4 = pbVar4 + 1;
      *param_1 = (long)pbVar4;
      pbVar3 = pbVar1;
    } while (pbVar4 != pbVar1);
  }
  else {
    if (*pbVar3 != 0x76) {
      return 1;
    }
    pbVar2 = pbVar3 + 1;
    *param_1 = (long)pbVar2;
    if (pbVar2 == pbVar1) {
      return 1;
    }
    pbVar4 = pbVar2;
    if (*pbVar2 == 0x6e) {
      pbVar4 = pbVar3 + 2;
      *param_1 = (long)pbVar4;
    }
    if (pbVar1 == pbVar4) {
      return 1;
    }
    if (*pbVar4 - 0x3a < 0xfffffff6) {
      return 1;
    }
    do {
      pbVar3 = pbVar4;
      if (*pbVar4 - 0x3a < 0xfffffff6) break;
      pbVar4 = pbVar4 + 1;
      *param_1 = (long)pbVar4;
      pbVar3 = pbVar1;
    } while (pbVar4 != pbVar1);
    if (pbVar3 == pbVar2) {
      return 1;
    }
    if (pbVar3 == pbVar1) {
      return 1;
    }
    if (*pbVar3 != 0x5f) {
      return 1;
    }
    pbVar2 = pbVar3 + 1;
    *param_1 = (long)pbVar2;
    if (pbVar2 == pbVar1) {
      return 1;
    }
    pbVar4 = pbVar2;
    if (*pbVar2 == 0x6e) {
      pbVar4 = pbVar3 + 2;
      *param_1 = (long)pbVar4;
    }
    if (pbVar1 == pbVar4) {
      return 1;
    }
    if (*pbVar4 - 0x3a < 0xfffffff6) {
      return 1;
    }
    do {
      pbVar3 = pbVar4;
      if (*pbVar4 - 0x3a < 0xfffffff6) break;
      pbVar4 = pbVar4 + 1;
      *param_1 = (long)pbVar4;
      pbVar3 = pbVar1;
    } while (pbVar4 != pbVar1);
  }
  if (((pbVar3 != pbVar2) && (pbVar3 != pbVar1)) && (*pbVar3 == 0x5f)) {
    *param_1 = (long)(pbVar3 + 1);
    return 0;
  }
  return 1;
}

