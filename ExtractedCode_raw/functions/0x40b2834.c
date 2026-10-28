// rea decompile_all
// name: AnhPD.FoodOrder.HomeCustomerParade.<SpawnRoutine>d__103$$MoveNext
// address: 0x40b2834
// body: available
// range: 0x40b2834-0x40b2aa7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40b2aa4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool AnhPD_FoodOrder_HomeCustomerParade_<SpawnRoutine>d__103__MoveNext(long param_1)

{
  undefined8 uVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  
  if ((DAT_09515eef & 1) == 0) {
    FUN_03f5c2a4(&DAT_091746e0);
    FUN_03f5c2a4(&DAT_091b2f40);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091eb1d0);
    FUN_03f5c2a4(&DAT_09191330);
    DAT_09515eef = 1;
  }
  iVar2 = *(int *)(param_1 + 0x10);
  lVar12 = *(long *)(param_1 + 0x20);
  if (iVar2 == 0) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    lVar5 = thunk_FUN_03f9944c(DAT_09191330);
    System_Object___ctor(lVar5,0);
    plVar10 = (long *)(param_1 + 0x30);
    *plVar10 = lVar5;
    thunk_FUN_03f5d7b8(plVar10,lVar5);
    if (*plVar10 != 0) {
      puVar7 = (undefined8 *)(*plVar10 + 0x10);
      *puVar7 = 0;
      thunk_FUN_03f5d7b8(puVar7,0);
      uVar13 = *(undefined8 *)(param_1 + 0x28);
      uVar1 = *(undefined8 *)(param_1 + 0x30);
      uVar8 = thunk_FUN_03f9944c(DAT_091746e0);
      FUN_070a8c30(uVar8,uVar1,DAT_091eb1d0,0);
      if (lVar12 != 0) {
        uVar13 = AnhPD_FoodOrder_HomeCustomerParade__LoadPrefab(lVar12,uVar13,uVar8,0);
        *(undefined8 *)(param_1 + 0x18) = uVar13;
        thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x18),uVar13);
        *(undefined4 *)(param_1 + 0x10) = 1;
        goto LAB_040b2a88;
      }
    }
  }
  else {
    if (iVar2 != 1) {
LAB_040b2a88:
      return iVar2 == 0;
    }
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (*(long *)(param_1 + 0x30) != 0) {
      uVar13 = *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x10);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar4 = UnityEngine_Object__op_Implicit(uVar13,0);
      if ((uVar4 & 1) == 0) goto LAB_040b2a88;
      if ((*(long *)(param_1 + 0x30) != 0) && (lVar12 != 0)) {
        lVar5 = AnhPD_FoodOrder_HomeCustomerParade__Build
                          (*(undefined4 *)(param_1 + 0x38),lVar12,
                           *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x10),
                           *(undefined8 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x3c),0);
        if (lVar5 == 0) goto LAB_040b2a88;
        lVar6 = *(long *)(lVar12 + 0x120);
        *(undefined1 *)(lVar5 + 0x75) = *(undefined1 *)(param_1 + 0x40);
        lVar11 = DAT_091b2f40;
        if (lVar6 != 0) {
          lVar9 = *(long *)(lVar6 + 0x10);
          *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
          if (lVar9 != 0) {
            uVar3 = *(uint *)(lVar6 + 0x18);
            if (uVar3 < *(uint *)(lVar9 + 0x18)) {
              *(uint *)(lVar6 + 0x18) = uVar3 + 1;
              plVar10 = (long *)(lVar9 + (long)(int)uVar3 * 8 + 0x20);
              *plVar10 = lVar5;
              thunk_FUN_03f5d7b8(plVar10,lVar5);
            }
            else {
              FUN_057e0c68(lVar6,lVar5,
                           *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
            }
            lVar11 = *(long *)(param_1 + 0x48);
            if (lVar11 != 0) {
              (**(code **)(lVar11 + 0x18))
                        (*(undefined8 *)(lVar11 + 0x40),lVar5,*(undefined8 *)(lVar11 + 0x28));
            }
            uVar13 = AnhPD_FoodOrder_HomeCustomerParade__WalkRoutine(lVar12,lVar5,0);
            uVar13 = UnityEngine_MonoBehaviour__StartCoroutine(lVar12,uVar13,0);
            *(undefined8 *)(lVar5 + 0x78) = uVar13;
            thunk_FUN_03f5d7b8((undefined8 *)(lVar5 + 0x78),uVar13);
            goto LAB_040b2a88;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

