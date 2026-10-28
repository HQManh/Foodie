// rea decompile_all
// name: Lean.Touch.LeanDragTrail$$Update
// address: 0x73479d4
// body: available
// range: 0x73479d4-0x7347cdf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7347cdc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Lean_Touch_LeanDragTrail__Update(long *param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  int iVar6;
  long lVar7;
  undefined4 uVar8;
  
  if ((DAT_095206ea & 1) == 0) {
    FUN_03f5c2a4(&DAT_091d22e8);
    FUN_03f5c2a4(&DAT_091d22f0);
    FUN_03f5c2a4(&DAT_091d2300);
    FUN_03f5c2a4(&DAT_091b3210);
    FUN_03f5c2a4(&DAT_091b3218);
    FUN_03f5c2a4(&DAT_091ae180);
    FUN_03f5c2a4(&DAT_091b3220);
    FUN_03f5c2a4(&DAT_091ae188);
    FUN_03f5c2a4(&DAT_091d4b20);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_095206ea = 1;
  }
  if ((param_1[4] != 0) &&
     (lVar2 = Lean_Touch_LeanFingerFilter__UpdateAndGetFingers(param_1[4],1), lVar2 != 0)) {
    if (0 < *(int *)(lVar2 + 0x18)) {
      iVar6 = 0;
      do {
        uVar3 = FUN_057e0998(lVar2,iVar6,DAT_091ae188);
        uVar4 = FUN_04be1338(param_1[0xf],uVar3,DAT_091d22f0);
        if (((uVar4 & 1) == 0) &&
           (((int)param_1[10] < 0 ||
            (iVar1 = FUN_04be12a8(param_1[0xf],DAT_091d22e8), iVar1 < (int)param_1[10])))) {
          lVar7 = param_1[9];
          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar4 = UnityEngine_Object__op_Inequality(lVar7,0,0);
          if ((uVar4 & 1) != 0) {
            lVar7 = param_1[9];
            if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            lVar7 = FUN_04c350c8(lVar7,DAT_091d4b20);
            if ((lVar7 == 0) || (lVar5 = UnityEngine_Component__get_gameObject(lVar7,0), lVar5 == 0)
               ) goto LAB_07347cdc;
            UnityEngine_GameObject__SetActive(lVar5,1,0);
            lVar5 = FUN_04be1448(param_1 + 0xf,uVar3,DAT_091d2300);
            if (lVar5 == 0) goto LAB_07347cdc;
            *(long *)(lVar5 + 0x18) = lVar7;
            thunk_FUN_03f5d7b8((long *)(lVar5 + 0x18),lVar7);
            lVar7 = param_1[9];
            *(undefined4 *)(lVar5 + 0x20) = 0;
            if (lVar7 == 0) goto LAB_07347cdc;
            uVar8 = UnityEngine_LineRenderer__get_widthMultiplier(lVar7,0);
            *(undefined4 *)(lVar5 + 0x24) = uVar8;
          }
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < *(int *)(lVar2 + 0x18));
    }
    if (param_1[0xf] != 0) {
      iVar6 = *(int *)(param_1[0xf] + 0x18);
      if (-1 < iVar6 + -1) {
        do {
          if (param_1[0xf] == 0) goto LAB_07347cdc;
          iVar6 = iVar6 + -1;
          lVar2 = FUN_057e0998(param_1[0xf],iVar6,DAT_091b3220);
          if (lVar2 == 0) goto LAB_07347cdc;
          uVar3 = *(undefined8 *)(lVar2 + 0x18);
          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar4 = UnityEngine_Object__op_Inequality(uVar3,0,0);
          if ((uVar4 & 1) == 0) {
LAB_07347ca4:
            if (param_1[0xf] == 0) goto LAB_07347cdc;
            FUN_057e251c(param_1[0xf],iVar6,DAT_091b3210);
          }
          else {
            (**(code **)(*param_1 + 0x1b8))
                      (param_1,lVar2,*(undefined8 *)(lVar2 + 0x10),*(undefined8 *)(lVar2 + 0x18),
                       *(undefined8 *)(*param_1 + 0x1c0));
            if (*(float *)((long)param_1 + 0x54) <= *(float *)(lVar2 + 0x20)) {
              if (*(long *)(lVar2 + 0x18) != 0) {
                uVar3 = UnityEngine_Component__get_gameObject(*(long *)(lVar2 + 0x18),0);
                if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
                  FUN_03f5c424(DAT_09188ad0);
                }
                UnityEngine_Object__Destroy(uVar3,0);
                goto LAB_07347ca4;
              }
              goto LAB_07347cdc;
            }
          }
        } while (0 < iVar6);
      }
      return;
    }
  }
LAB_07347cdc:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

