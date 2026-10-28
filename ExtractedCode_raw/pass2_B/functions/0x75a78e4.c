// rea decompile_all
// name: System.DateTimeParse$$DetermineTimeZoneAdjustments
// address: 0x75a78e4
// body: available
// range: 0x75a78e4-0x75a7b2f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75a79d8 to 0x75a7b30 System.DateTimeParse$$DateTimeOffsetTimeZonePostProcessing (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x75a7acc to 0x75a7e70 System.DateTimeParse$$AdjustTimeZoneToLocal (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x75a7ae8 to 0x75a7d5c System.DateTimeParse$$AdjustTimeZoneToUniversal (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong System_DateTimeParse__DetermineTimeZoneAdjustments
                (undefined8 param_1,long param_2,uint param_3,uint param_4)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  uint uVar4;
  
  if ((DAT_09521c57 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091835a8);
    FUN_03f5c2a4(&DAT_09183548);
    FUN_03f5c2a4(&DAT_0918bd60);
    FUN_03f5c2a4(&DAT_0918bdc0);
    FUN_03f5c2a4(&DAT_092100e0);
    DAT_09521c57 = 1;
  }
  if ((*(byte *)(param_2 + 0x25) >> 3 & 1) != 0) {
    lVar1 = DAT_091835a8;
    if (*(int *)(DAT_091835a8 + 0xe4) == 0) {
      lVar1 = FUN_03f5c424();
    }
    uVar3 = System_DateTimeParse__DateTimeOffsetTimeZonePostProcessing(lVar1,param_2,param_3);
    return uVar3;
  }
  if (*(int *)(DAT_0918bd60 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar1 = DAT_0918bd60;
  if (0xeab17b6000 < *(long *)(param_2 + 0x28) + 504000000000U) {
    System_DateTimeResult__SetFailure(param_2,4,DAT_092100e0,0);
    uVar4 = 0;
    goto LAB_075a7b1c;
  }
  uVar4 = *(uint *)(param_2 + 0x24);
  if ((uVar4 >> 8 & 1) == 0) {
    if ((param_3 >> 5 & 1) == 0) {
      if ((param_3 >> 6 & 1) == 0) {
        uVar4 = 1;
        goto LAB_075a7b1c;
      }
      if ((param_3 >> 4 & 1) == 0) {
        *(uint *)(param_2 + 0x24) = uVar4 | 0x100;
        if (*(int *)(lVar1 + 0xe4) == 0) {
          FUN_03f5c424();
          lVar1 = DAT_0918bd60;
        }
        uVar2 = **(undefined8 **)(lVar1 + 0xb8);
        goto LAB_075a7a94;
      }
      goto LAB_075a7aec;
    }
    if ((param_3 >> 4 & 1) != 0) {
      *(uint *)(param_2 + 0x24) = uVar4 | 0x100;
      uVar2 = *(undefined8 *)(param_2 + 0x38);
      if (*(int *)(DAT_0918bdc0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar2 = System_TimeZoneInfo__GetLocalUtcOffset(uVar2,2,0);
LAB_075a7a94:
      *(undefined8 *)(param_2 + 0x28) = uVar2;
      goto LAB_075a7a98;
    }
    uVar2 = *(undefined8 *)(param_2 + 0x38);
    if (*(int *)(DAT_09183548 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar2 = System_DateTime__SpecifyKind(uVar2,2);
  }
  else {
LAB_075a7a98:
    if (((param_3 >> 7 & 1) == 0) || ((*(byte *)(param_2 + 0x25) >> 1 & 1) == 0)) {
      if ((param_3 >> 4 & 1) == 0) {
        if (*(int *)(DAT_091835a8 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar3 = System_DateTimeParse__AdjustTimeZoneToLocal(param_2,param_4 & 1);
        return uVar3;
      }
      if (*(int *)(DAT_091835a8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar3 = System_DateTimeParse__AdjustTimeZoneToUniversal(param_2);
      return uVar3;
    }
LAB_075a7aec:
    uVar2 = *(undefined8 *)(param_2 + 0x38);
    if (*(int *)(DAT_09183548 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar2 = System_DateTime__SpecifyKind(uVar2,1);
  }
  uVar4 = 1;
  *(undefined8 *)(param_2 + 0x38) = uVar2;
LAB_075a7b1c:
  return (ulong)uVar4;
}

