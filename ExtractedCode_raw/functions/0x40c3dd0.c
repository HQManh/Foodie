// rea decompile_all
// name: AnhPD.FoodOrder.ServeShelfController$$BeginResultAnim
// address: 0x40c3dd0
// body: available
// range: 0x40c3dd0-0x40c4067 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40c4064 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4
AnhPD_FoodOrder_ServeShelfController__BeginResultAnim
          (long param_1,long param_2,undefined8 param_3,uint param_4)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  float fVar7;
  float fVar8;
  
  if ((DAT_09515f77 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180e78);
    FUN_03f5c2a4(&DAT_0919ee80);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_0918c148);
    FUN_03f5c2a4(&DAT_091dbfe0);
    FUN_03f5c2a4(&DAT_091dc040);
    FUN_03f5c2a4(&DAT_091efa68);
    FUN_03f5c2a4(&DAT_09194418);
    DAT_09515f77 = 1;
  }
  lVar1 = thunk_FUN_03f9944c(DAT_09194418);
  AnhPD_FoodOrder_ServeShelfController_<>c__DisplayClass40_0___ctor(lVar1,0);
  if (lVar1 != 0) {
    *(long *)(lVar1 + 0x18) = param_1;
    thunk_FUN_03f5d7b8((long *)(lVar1 + 0x18),param_1);
    plVar6 = (long *)(lVar1 + 0x20);
    *plVar6 = param_2;
    thunk_FUN_03f5d7b8(plVar6,param_2);
    if (*plVar6 != 0) {
      lVar4 = *(long *)(*plVar6 + 0xa8);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar2 = UnityEngine_Object__op_Implicit(lVar4,0);
      plVar5 = (long *)0x0;
      if ((uVar2 & 1) != 0) {
        if (lVar4 == 0) goto LAB_040c4064;
        plVar5 = *(long **)(lVar4 + 0x88);
      }
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar2 = UnityEngine_Object__op_Implicit(plVar5,0);
      if ((uVar2 & 1) == 0) {
        return 0;
      }
      if (plVar5 != (long *)0x0) {
        uVar2 = (**(code **)(*plVar5 + 0x178))(plVar5,param_3,*(undefined8 *)(*plVar5 + 0x180));
        if ((uVar2 & 1) == 0) {
          return 0;
        }
        if (*(long *)(param_1 + 0x40) != 0) {
          FUN_06f821cc(*(long *)(param_1 + 0x40),*plVar6,param_4 & 1,DAT_0919ee80);
          if (*plVar6 != 0) {
            AnhPD_FoodOrder_ServePlate__SetMergeAnimLifted(*plVar6,1);
            *(undefined1 *)(lVar1 + 0x10) = 0;
            uVar3 = thunk_FUN_03f9944c(DAT_09180e78);
            System_Action___ctor(uVar3,lVar1,DAT_091efa68,0);
            (**(code **)(*plVar5 + 0x198))
                      (plVar5,lVar4,param_3,uVar3,*(undefined8 *)(*plVar5 + 0x1a0));
            if (*(char *)(lVar1 + 0x10) == '\0') {
              fVar7 = (float)(**(code **)(*plVar5 + 0x188))
                                       (plVar5,param_3,*(undefined8 *)(*plVar5 + 400));
              fVar8 = 0.01;
              if (0.01 <= fVar7) {
                fVar8 = fVar7;
              }
              uVar3 = thunk_FUN_03f9944c(DAT_0918c148);
              DG_Tweening_TweenCallback___ctor(uVar3,lVar1,DAT_091efa68,0);
              uVar3 = DG_Tweening_DOVirtual__DelayedCall(fVar8,uVar3,1,0);
              uVar3 = FUN_04d9656c(uVar3,0,DAT_091dc040);
              FUN_04d9642c(uVar3,param_1,DAT_091dbfe0);
              return 1;
            }
            return 1;
          }
        }
      }
    }
  }
LAB_040c4064:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

