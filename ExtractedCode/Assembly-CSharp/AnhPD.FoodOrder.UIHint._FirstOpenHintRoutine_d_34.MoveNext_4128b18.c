// rea decompile_all
// name: AnhPD.FoodOrder.UIHint.<FirstOpenHintRoutine>d__34$$MoveNext
// address: 0x4128b18
// body: available
// range: 0x4128b18-0x4128ce3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4128ce0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool AnhPD_FoodOrder_UIHint_<FirstOpenHintRoutine>d__34__MoveNext
               (undefined1 param_1 [16],undefined4 param_2,long param_3)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined4 uVar8;
  
  if ((DAT_095162eb & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b19b8);
    FUN_03f5c2a4(&DAT_091b19a0);
    FUN_03f5c2a4(&DAT_0917d050);
    FUN_03f5c2a4(&DAT_0918ce90);
    DAT_095162eb = 1;
  }
  iVar1 = *(int *)(param_3 + 0x10);
  lVar7 = *(long *)(param_3 + 0x20);
  if (iVar1 == 0) {
    *(undefined4 *)(param_3 + 0x10) = 0xffffffff;
    if (lVar7 == 0) goto LAB_04128ce0;
    uVar8 = *(undefined4 *)(lVar7 + 0x108);
    uVar4 = thunk_FUN_03f9944c(DAT_0918ce90);
    UnityEngine_WaitForSeconds___ctor(uVar8,uVar4,0);
    *(undefined8 *)(param_3 + 0x18) = uVar4;
    thunk_FUN_03f5d7b8((undefined8 *)(param_3 + 0x18),uVar4);
    *(undefined4 *)(param_3 + 0x10) = 1;
  }
  else if (iVar1 == 1) {
    *(undefined4 *)(param_3 + 0x10) = 0xffffffff;
    if (lVar7 != 0) {
      *(undefined8 *)(lVar7 + 0x110) = 0;
      thunk_FUN_03f5d7b8(lVar7 + 0x110,0);
      if ((*(long *)(lVar7 + 0x100) != 0) &&
         (lVar3 = UnityEngine_Component__get_gameObject(*(long *)(lVar7 + 0x100),0), lVar3 != 0)) {
        UnityEngine_GameObject__SetActive(lVar3,1,0);
        plVar6 = *(long **)(lVar7 + 0x100);
        lVar3 = thunk_FUN_03f9944c(DAT_0917d050);
        FUN_058abd7c(lVar3,DAT_091b19a0);
        if ((*(long *)(lVar7 + 0x100) != 0) &&
           ((lVar7 = UnityEngine_Component__get_transform(*(long *)(lVar7 + 0x100),0), lVar7 != 0 &&
            (uVar8 = UnityEngine_Transform__get_position(lVar7,0), lVar7 = DAT_091b19b8, lVar3 != 0)
            ))) {
          lVar5 = *(long *)(lVar3 + 0x10);
          *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
          if (lVar5 != 0) {
            uVar2 = *(uint *)(lVar3 + 0x18);
            if (uVar2 < *(uint *)(lVar5 + 0x18)) {
              lVar5 = lVar5 + (long)(int)uVar2 * 8;
              *(uint *)(lVar3 + 0x18) = uVar2 + 1;
              *(undefined4 *)(lVar5 + 0x20) = uVar8;
              *(undefined4 *)(lVar5 + 0x24) = param_2;
            }
            else {
              FUN_058ac614(lVar3,*(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
            }
            if (plVar6 != (long *)0x0) {
              (**(code **)(*plVar6 + 0x178))(plVar6,lVar3,*(undefined8 *)(*plVar6 + 0x180));
              goto LAB_04128cc4;
            }
          }
        }
      }
    }
LAB_04128ce0:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
LAB_04128cc4:
  return iVar1 == 0;
}

