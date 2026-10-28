// rea decompile_all
// name: CookOrder.Cooking.Implement.CookingGameplayPresentation$$AutoGhost
// address: 0x44abef8
// body: available
// range: 0x44abef8-0x44ac1e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x44ac1c0 to 0x865aecc UnityEngine.GameObject$$get_transform (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x44ac1e0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44ac1e4 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
CookOrder_Cooking_Implement_CookingGameplayPresentation__AutoGhost
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,long param_4,undefined4 param_5)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  if ((DAT_09518215 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091cd7c0);
    FUN_03f5c2a4(&DAT_091cdba8);
    FUN_03f5c2a4(&DAT_09184b68);
    FUN_03f5c2a4(&DAT_091d4bc0);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091fc4d8);
    DAT_09518215 = 1;
  }
  if (*(long *)(param_4 + 0x2e0) == 0) goto LAB_044ac1e0;
  lVar1 = CookOrder_Cooking_Implement_CookingMapPresentation__Art
                    (*(long *)(param_4 + 0x2e0),param_5,0);
  if (lVar1 == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = *(undefined8 *)(lVar1 + 0x18);
  }
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = UnityEngine_Object__op_Implicit(uVar7,0);
  if ((uVar2 & 1) == 0) {
    if (lVar1 == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = *(undefined8 *)(lVar1 + 0x20);
    }
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar2 = UnityEngine_Object__op_Implicit(uVar7,0);
    if ((uVar2 & 1) == 0) {
      return 0;
    }
    lVar3 = thunk_FUN_03f9944c(DAT_09184b68);
    UnityEngine_GameObject___ctor(lVar3,DAT_091fc4d8,0);
    if (lVar3 == 0) goto LAB_044ac1e0;
    lVar4 = UnityEngine_GameObject__get_transform(lVar3,0);
    uVar7 = UnityEngine_Component__get_transform(param_4,0);
    if (lVar4 == 0) goto LAB_044ac1e0;
    UnityEngine_Transform__SetParent(lVar4,uVar7,0,0);
    lVar4 = FUN_04b7c294(lVar3,DAT_091cd7c0);
    if ((lVar1 == 0) || (lVar4 == 0)) goto LAB_044ac1e0;
    UnityEngine_SpriteRenderer__set_sprite(lVar4,*(undefined8 *)(lVar1 + 0x20),0);
  }
  else {
    if (lVar1 == 0) goto LAB_044ac1e0;
    uVar8 = *(undefined8 *)(lVar1 + 0x18);
    uVar7 = UnityEngine_Component__get_transform(param_4,0);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09188ad0);
    }
    lVar3 = FUN_04c35338(uVar8,uVar7,DAT_091d4bc0);
    if (lVar3 == 0) goto LAB_044ac1e0;
    lVar4 = UnityEngine_GameObject__get_transform(lVar3,0);
    if (((*(long *)(lVar1 + 0x18) == 0) ||
        (lVar1 = UnityEngine_GameObject__get_transform(*(long *)(lVar1 + 0x18),0), lVar1 == 0)) ||
       (UnityEngine_Transform__get_localScale(lVar1,0), lVar4 == 0)) goto LAB_044ac1e0;
    UnityEngine_Transform__set_localScale(lVar4,0);
    UnityEngine_GameObject__SetActive(lVar3,1,0);
  }
  lVar1 = FUN_04b7ceb4(lVar3,1,DAT_091cdba8);
  if (lVar1 != 0) {
    uVar6 = *(uint *)(lVar1 + 0x18);
    if (0 < (int)uVar6) {
      lVar4 = 0;
      do {
        if (uVar6 <= (uint)lVar4) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        lVar5 = *(long *)(lVar1 + 0x20 + lVar4 * 8);
        if (lVar5 == 0) goto LAB_044ac1e0;
        UnityEngine_Behaviour__set_enabled(lVar5,0,0);
        uVar6 = *(uint *)(lVar1 + 0x18);
        lVar4 = lVar4 + 1;
      } while ((int)lVar4 < (int)uVar6);
    }
    lVar1 = UnityEngine_GameObject__get_transform(lVar3,0);
    if (lVar1 != 0) {
      UnityEngine_Transform__set_position(param_1,param_2,param_3,lVar1,0);
      uVar7 = UnityEngine_GameObject__get_transform(lVar3,0);
      return uVar7;
    }
  }
LAB_044ac1e0:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

