// rea decompile_all
// name: CookOrder.Cooking.Implement.GroupViewSpineCombineChoice$$BindSfx
// address: 0x44e6128
// body: available
// range: 0x44e6128-0x44e62c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x44e6260 to 0x78c8244 Spine.TrackEntry$$add_Start (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x44e62bc to 0x78c885c Spine.TrackEntry$$add_Event (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x44e62c0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CookOrder_Cooking_Implement_GroupViewSpineCombineChoice__BindSfx
               (undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  long *plVar4;
  
  if ((DAT_09518394 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_0918e418);
    FUN_03f5c2a4(&DAT_0918e420);
    FUN_03f5c2a4(&DAT_091eafc0);
    FUN_03f5c2a4(&DAT_091eafc8);
    FUN_03f5c2a4(&DAT_09191180);
    DAT_09518394 = 1;
  }
  lVar1 = thunk_FUN_03f9944c(DAT_09191180);
  System_Object___ctor(lVar1,0);
  if (lVar1 != 0) {
    plVar4 = (long *)(lVar1 + 0x10);
    *plVar4 = param_3;
    thunk_FUN_03f5d7b8(plVar4,param_3);
    if (*plVar4 != 0) {
      uVar3 = *(undefined8 *)(*plVar4 + 0x20);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar2 = UnityEngine_Object__op_Implicit(uVar3,0);
      if ((uVar2 & 1) == 0) {
        return;
      }
      if (*plVar4 != 0) {
        uVar2 = System_String__IsNullOrEmpty(*(undefined8 *)(*plVar4 + 0x28),0);
        if ((uVar2 & 1) == 0) {
          uVar3 = thunk_FUN_03f9944c(DAT_0918e420);
          Spine_AnimationState_TrackEntryEventDelegate___ctor(uVar3,lVar1,DAT_091eafc8,0);
          if (param_2 != 0) {
            Spine_TrackEntry__add_Event(param_2,uVar3,0);
            return;
          }
        }
        else {
          uVar3 = thunk_FUN_03f9944c(DAT_0918e418);
          Spine_AnimationState_TrackEntryDelegate___ctor(uVar3,lVar1,DAT_091eafc0,0);
          if (param_2 != 0) {
            Spine_TrackEntry__add_Start(param_2,uVar3,0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

