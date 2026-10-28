// rea decompile_all
// name: _GAME.Bridge.R1RemoteConfig$$GetBool
// address: 0x776499c
// body: available
// range: 0x776499c-0x7764d23 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7764d20 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


byte _GAME_Bridge_R1RemoteConfig__GetBool(undefined8 param_1,byte param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  byte local_3c [4];
  byte local_38 [4];
  char local_34 [4];
  
  if ((DAT_09522c5e & 1) == 0) {
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_0919f4b8);
    FUN_03f5c2a4(&DAT_0919f4d8);
    FUN_03f5c2a4(&DAT_091b4aa8);
    FUN_03f5c2a4(&DAT_091b4ab0);
    FUN_03f5c2a4(&DAT_09189970);
    FUN_03f5c2a4(&DAT_09214118);
    FUN_03f5c2a4(&DAT_09214120);
    FUN_03f5c2a4(&DAT_0921b558);
    FUN_03f5c2a4(&DAT_09224438);
    FUN_03f5c2a4(&DAT_091f9758);
    FUN_03f5c2a4(&DAT_091f95f0);
    DAT_09522c5e = 1;
  }
  local_34[0] = '\0';
  if (*(int *)(DAT_09189970 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if (**(long **)(DAT_09189970 + 0xb8) == 0) goto LAB_07764d20;
  uVar1 = FUN_06f83d1c(**(long **)(DAT_09189970 + 0xb8),param_1,local_34,DAT_0919f4b8);
  if ((uVar1 & 1) != 0) {
    param_2 = local_34[0] != '\0';
    goto LAB_07764c5c;
  }
  uVar1 = FUN_05a8eda4(DAT_091b4ab0);
  if ((uVar1 & 1) == 0) goto LAB_07764c5c;
  lVar2 = *(long *)(DAT_091b4aa8 + 0x20);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_03f95a6c();
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_03f95a6c();
  }
  if (**(long **)(lVar2 + 0xb8) == 0) goto LAB_07764d20;
  if (*(char *)(**(long **)(lVar2 + 0xb8) + 0x5c) == '\0') goto LAB_07764c5c;
  lVar2 = *(long *)(DAT_091b4aa8 + 0x20);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_03f95a6c();
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_03f95a6c();
  }
  if (**(long **)(lVar2 + 0xb8) == 0) goto LAB_07764d20;
  lVar2 = IapAdsSystem_RemoteConfigManager__GetString(**(long **)(lVar2 + 0xb8),param_1,0);
  uVar1 = System_String__IsNullOrWhiteSpace(lVar2,0);
  if ((uVar1 & 1) == 0) {
    if (lVar2 == 0) goto LAB_07764d20;
    lVar2 = System_String__Trim(lVar2,0);
    uVar1 = System_String__op_Equality(lVar2,DAT_091f9758,0);
    if ((uVar1 & 1) == 0) {
      if (lVar2 == 0) goto LAB_07764d20;
      uVar1 = System_String__Equals(lVar2,DAT_09224438,5,0);
      if ((uVar1 & 1) == 0) {
        uVar1 = System_String__op_Equality(lVar2,DAT_091f95f0,0);
        if (((uVar1 & 1) == 0) &&
           (uVar1 = System_String__Equals(lVar2,DAT_0921b558,5,0), (uVar1 & 1) == 0)) {
          local_38[0] = param_2 & 1;
          uVar3 = FUN_03f5c42c(DAT_09535400,local_38);
          uVar3 = System_String__Format(DAT_09214120,param_1,lVar2,uVar3,0);
          if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
            FUN_03f5c424(DAT_091835d0);
          }
          UnityEngine_Debug__LogWarning(uVar3,0);
        }
        else {
          param_2 = 0;
        }
        goto LAB_07764bc4;
      }
    }
    param_2 = 1;
  }
LAB_07764bc4:
  if (*(int *)(DAT_09189970 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if (**(long **)(DAT_09189970 + 0xb8) == 0) {
LAB_07764d20:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  FUN_06f821cc(**(long **)(DAT_09189970 + 0xb8),param_1,param_2 & 1,DAT_0919f4d8);
  local_3c[0] = param_2 & 1;
  uVar3 = FUN_03f5c42c(DAT_09535400,local_3c);
  uVar3 = System_String__Format(DAT_09214118,param_1,uVar3,0);
  if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
    FUN_03f5c424(DAT_091835d0);
  }
  UnityEngine_Debug__Log(uVar3,0);
LAB_07764c5c:
  return param_2 & 1;
}

