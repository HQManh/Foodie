// rea decompile_all
// name: AnhPD.FoodOrder.Autoplay.CookingBotRunner$$TryAutoResume
// address: 0x41772e4
// body: available
// range: 0x41772e4-0x417754f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x417754c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_Autoplay_CookingBotRunner__TryAutoResume(long param_1)

{
  undefined4 uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 local_28;
  undefined4 local_24;
  
  if ((DAT_095165fd & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182cc0);
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_091881a0);
    FUN_03f5c2a4(&DAT_091b4c28);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09225888);
    FUN_03f5c2a4(&DAT_091fa738);
    DAT_095165fd = 1;
  }
  if ((*(char *)(param_1 + 0x70) == '\0') && (*(char *)(param_1 + 0x3b) == '\0')) {
    lVar2 = *(long *)(DAT_091b4c28 + 0x20);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_03f95a6c();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_03f95a6c();
    }
    lVar2 = **(long **)(lVar2 + 0xb8);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09188ad0);
    }
    uVar3 = UnityEngine_Object__op_Equality(lVar2,0,0);
    if ((uVar3 & 1) == 0) {
      if (lVar2 == 0) goto LAB_0417754c;
      if (*(long *)(lVar2 + 0x38) != 0) {
        uVar5 = **(undefined8 **)(DAT_091881a0 + 0xb8);
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar3 = UnityEngine_Object__op_Equality(uVar5,0,0);
        if ((uVar3 & 1) == 0) {
          lVar2 = *(long *)(lVar2 + 0x38);
          *(undefined1 *)(param_1 + 0x70) = 1;
          if (lVar2 == 0) {
LAB_0417754c:
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          uVar5 = *(undefined8 *)(lVar2 + 0x10);
          uVar1 = *(undefined4 *)(lVar2 + 0x1c);
          if (*(int *)(DAT_09182cc0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar3 = CakeOrder_InGame_CookingBotAutoRetry__ShouldAutoResume(uVar5,uVar1,0);
          if ((uVar3 & 1) != 0) {
            if (*(int *)(DAT_09182cc0 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            local_24 = FUN_04177cac(0);
            uVar5 = FUN_03f5c42c(DAT_09535420,&local_24);
            uVar5 = System_String__Format(DAT_091fa738,uVar5,0);
            lVar2 = FUN_04177dec(0);
            if (lVar2 == 0) goto LAB_0417754c;
            local_28 = *(undefined4 *)(lVar2 + 0x14);
            uVar4 = FUN_03f5c42c(DAT_09535420,&local_28);
            uVar4 = System_String__Format(DAT_09225888,uVar4,0);
            uVar5 = System_String__Concat(uVar5,uVar4,0);
            if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
              FUN_03f5c424(DAT_091835d0);
            }
            UnityEngine_Debug__Log(uVar5,param_1,0);
            AnhPD_FoodOrder_Autoplay_CookingBotRunner__Run(param_1);
          }
        }
      }
    }
  }
  return;
}

