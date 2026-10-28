// rea decompile_all
// name: System.Globalization.TimeSpanParse.StringParser$$TryParse
// address: 0x752c90c
// body: available
// range: 0x752c90c-0x752caeb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
System_Globalization_TimeSpanParse_StringParser__TryParse
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  short sVar1;
  short sVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  long local_48;
  int local_3c;
  long local_38;
  
  if ((DAT_0952183f & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b9810);
    FUN_03f5c2a4(&DAT_0920efa0);
    FUN_03f5c2a4(&DAT_0920dc98);
    DAT_0952183f = 1;
  }
  local_38 = 0;
  local_3c = 0;
  local_48 = 0;
  *param_4 = 0;
  *param_1 = param_2;
  param_1[1] = param_3;
  *(undefined4 *)((long)param_1 + 0x14) = 0xffffffff;
  *(int *)(param_1 + 3) = (int)param_3;
  do {
    do {
      System_Globalization_TimeSpanParse_StringParser__NextChar(param_1);
      sVar1 = *(short *)(param_1 + 2);
    } while (sVar1 == 9);
  } while (sVar1 == 0x20);
  if (sVar1 == 0x2d) {
    System_Globalization_TimeSpanParse_StringParser__NextChar(param_1);
  }
  sVar2 = System_Globalization_TimeSpanParse_StringParser__NextNonDigit(param_1);
  if (sVar2 == 0x3a) {
    uVar3 = System_Globalization_TimeSpanParse_StringParser__ParseTime(param_1,&local_38,param_4);
    if ((uVar3 & 1) == 0) {
      return 0;
    }
  }
  else {
    uVar3 = System_Globalization_TimeSpanParse_StringParser__ParseInt
                      (param_1,0xa2e3ff,&local_3c,param_4);
    if ((uVar3 & 1) == 0) {
      return 0;
    }
    lVar6 = (long)local_3c * 864000000000;
    local_38 = lVar6;
    if (*(short *)(param_1 + 2) == 0x2e) {
      System_Globalization_TimeSpanParse_StringParser__NextChar(param_1);
      uVar3 = System_Globalization_TimeSpanParse_StringParser__ParseTime(param_1,&local_48,param_4);
      if ((uVar3 & 1) == 0) {
        return 0;
      }
      local_38 = local_48 + lVar6;
    }
  }
  if (sVar1 != 0x2d) {
    lVar6 = local_38;
    if (-1 < local_38) goto LAB_0752ca88;
  }
  else {
    lVar6 = -local_38;
    local_38 = lVar6;
    if (lVar6 < 1) {
LAB_0752ca88:
      while ((*(short *)(param_1 + 2) == 9 || (*(short *)(param_1 + 2) == 0x20))) {
        System_Globalization_TimeSpanParse_StringParser__NextChar(param_1);
      }
      if (*(int *)(param_1 + 3) <= *(int *)((long)param_1 + 0x14)) {
        *param_4 = lVar6;
        return 1;
      }
      uVar4 = 2;
      puVar5 = &DAT_0920dc98;
      goto LAB_0752cab8;
    }
  }
  uVar4 = 4;
  puVar5 = &DAT_0920efa0;
LAB_0752cab8:
  System_Globalization_TimeSpanParse_TimeSpanResult__SetFailure(param_4,uVar4,*puVar5,0,0);
  return 0;
}

