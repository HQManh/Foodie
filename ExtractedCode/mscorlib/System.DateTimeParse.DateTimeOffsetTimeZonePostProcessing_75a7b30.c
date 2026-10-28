// rea decompile_all
// name: System.DateTimeParse$$DateTimeOffsetTimeZonePostProcessing
// address: 0x75a7b30
// body: available
// range: 0x75a7b30-0x75a7d5b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint System_DateTimeParse__DateTimeOffsetTimeZonePostProcessing
               (undefined8 param_1,long param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 local_28;
  
  if ((DAT_09521c58 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091835a8);
    FUN_03f5c2a4(&DAT_09183548);
    FUN_03f5c2a4(&DAT_0918bd60);
    FUN_03f5c2a4(&DAT_0918bdc0);
    FUN_03f5c2a4(&DAT_0920eff8);
    FUN_03f5c2a4(&DAT_092100e0);
    DAT_09521c58 = 1;
  }
  if ((*(byte *)(param_2 + 0x25) & 1) == 0) {
    if ((param_3 >> 6 & 1) == 0) {
      uVar6 = *(undefined8 *)(param_2 + 0x38);
      if (*(int *)(DAT_0918bdc0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar6 = System_TimeZoneInfo__GetLocalUtcOffset(uVar6,2,0);
    }
    else {
      if (*(int *)(DAT_0918bd60 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar6 = **(undefined8 **)(DAT_0918bd60 + 0xb8);
    }
    *(undefined8 *)(param_2 + 0x28) = uVar6;
  }
  if (*(int *)(DAT_0918bd60 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar7 = *(long *)(param_2 + 0x28);
  if (*(int *)(DAT_09183548 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar3 = System_DateTime__get_Ticks(param_2 + 0x38);
  uVar4 = lVar3 - lVar7;
  if (uVar4 < 0x2bca2875f4374000) {
    if (lVar7 + 504000000000U < 0xeab17b6001) {
      if ((param_3 >> 4 & 1) != 0) {
        if ((*(uint *)(param_2 + 0x24) & 0x100) == 0 && (param_3 & 0x40) == 0) {
          if (*(int *)(DAT_091835a8 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar2 = System_DateTimeParse__AdjustTimeZoneToUniversal(param_2);
          if (*(int *)(DAT_0918bd60 + 0xe4) == 0) {
            FUN_03f5c424(DAT_0918bd60);
          }
          *(undefined8 *)(param_2 + 0x28) = **(undefined8 **)(DAT_0918bd60 + 0xb8);
          goto LAB_075a7cfc;
        }
        local_28 = 0;
        System_DateTime___ctor(&local_28,uVar4,1);
        lVar7 = DAT_0918bd60;
        iVar1 = *(int *)(DAT_0918bd60 + 0xe4);
        *(undefined8 *)(param_2 + 0x38) = local_28;
        if (iVar1 == 0) {
          FUN_03f5c424();
          lVar7 = DAT_0918bd60;
        }
        *(undefined8 *)(param_2 + 0x28) = **(undefined8 **)(lVar7 + 0xb8);
      }
      uVar2 = 1;
      goto LAB_075a7cfc;
    }
    puVar5 = &DAT_092100e0;
  }
  else {
    puVar5 = &DAT_0920eff8;
  }
  System_DateTimeResult__SetFailure(param_2,4,*puVar5,0);
  uVar2 = 0;
LAB_075a7cfc:
  return uVar2 & 1;
}

