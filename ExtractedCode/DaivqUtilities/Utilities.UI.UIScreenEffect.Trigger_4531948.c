// rea decompile_all
// name: Utilities.UI.UIScreenEffect$$Trigger
// address: 0x4531948
// body: available
// range: 0x4531948-0x4531ca3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4531c9c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4531ca0 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Utilities_UI_UIScreenEffect__Trigger(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  uint uVar5;
  long lVar6;
  int *piVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  uint uVar11;
  undefined4 uVar12;
  undefined8 local_48;
  
  if ((DAT_09518642 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091cdc48);
    FUN_03f5c2a4(&DAT_09186248);
    FUN_03f5c2a4(&DAT_091ad540);
    FUN_03f5c2a4(&DAT_091ad548);
    FUN_03f5c2a4(&DAT_091ad538);
    FUN_03f5c2a4(&DAT_0917c3a8);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09518642 = 1;
  }
  local_48 = 0;
  plVar8 = (long *)(param_1 + 0x68);
  if (*plVar8 == 0) {
    lVar1 = thunk_FUN_03f9944c(DAT_0917c3a8);
    FUN_057e0400(lVar1,DAT_091ad538);
    lVar10 = *(long *)(param_1 + 0x60);
    if (lVar10 == 0) goto LAB_04531c9c;
    uVar5 = *(uint *)(lVar10 + 0x18);
    if (0 < (int)uVar5) {
      uVar11 = 0;
      do {
        if (uVar5 <= uVar11) goto LAB_04531ca0;
        lVar2 = *(long *)(lVar10 + (long)(int)uVar11 * 8 + 0x20);
        if (lVar2 == 0) goto LAB_04531c9c;
        uVar3 = FUN_04b7d49c(lVar2,&local_48,DAT_091cdc48);
        lVar2 = DAT_091ad540;
        if ((uVar3 & 1) != 0) {
          if (lVar1 == 0) goto LAB_04531c9c;
          lVar6 = *(long *)(lVar1 + 0x10);
          *(int *)(lVar1 + 0x1c) = *(int *)(lVar1 + 0x1c) + 1;
          if (lVar6 == 0) goto LAB_04531c9c;
          uVar5 = *(uint *)(lVar1 + 0x18);
          if (uVar5 < *(uint *)(lVar6 + 0x18)) {
            *(uint *)(lVar1 + 0x18) = uVar5 + 1;
            *(undefined8 *)(lVar6 + (long)(int)uVar5 * 8 + 0x20) = local_48;
            thunk_FUN_03f5d7b8();
          }
          else {
            FUN_057e0c68(lVar1,local_48,
                         *(undefined8 *)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
          }
        }
        uVar5 = *(uint *)(lVar10 + 0x18);
        uVar11 = uVar11 + 1;
      } while ((int)uVar11 < (int)uVar5);
    }
    if (lVar1 == 0) goto LAB_04531c9c;
    lVar1 = FUN_057e28a4(lVar1,DAT_091ad548);
    *plVar8 = lVar1;
    thunk_FUN_03f5d7b8(plVar8,lVar1);
  }
  uVar9 = *(undefined8 *)(param_1 + 0x50);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar3 = UnityEngine_Object__op_Implicit(uVar9,0);
  if ((uVar3 & 1) == 0) {
    lVar1 = *(long *)(param_1 + 0x30);
    if ((lVar1 != 0) && (uVar5 = *(uint *)(lVar1 + 0x18), 0 < (int)uVar5)) {
      lVar10 = 0;
      do {
        if (uVar5 <= (uint)lVar10) goto LAB_04531ca0;
        lVar2 = *(long *)(lVar1 + 0x20 + lVar10 * 8);
        if ((lVar2 == 0) || (lVar2 = UnityEngine_Component__get_gameObject(lVar2,0), lVar2 == 0))
        goto LAB_04531c9c;
        UnityEngine_GameObject__SetActive(lVar2,1,0);
        uVar5 = *(uint *)(lVar1 + 0x18);
        lVar10 = lVar10 + 1;
      } while ((int)lVar10 < (int)uVar5);
    }
  }
  else {
    if ((*(long *)(param_1 + 0x50) == 0) ||
       (lVar1 = UnityEngine_Component__get_gameObject(*(long *)(param_1 + 0x50),0), lVar1 == 0))
    goto LAB_04531c9c;
    UnityEngine_GameObject__SetActive(lVar1,1,0);
  }
  lVar1 = *plVar8;
  if (lVar1 != 0) {
    uVar5 = *(uint *)(lVar1 + 0x18);
    if (0 < (int)uVar5) {
      uVar11 = 0;
      do {
        if (uVar5 <= uVar11) {
LAB_04531ca0:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        plVar8 = *(long **)(lVar1 + (long)(int)uVar11 * 8 + 0x20);
        if (plVar8 == (long *)0x0) goto LAB_04531c9c;
        lVar10 = *plVar8;
        uVar3 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar3 != 0) {
          piVar7 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == DAT_09186248) {
              puVar4 = (undefined8 *)(lVar10 + (long)(*piVar7 + 1) * 0x10 + 0x138);
              goto LAB_04531c04;
            }
            uVar3 = uVar3 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar3 != 0);
        }
        puVar4 = (undefined8 *)FUN_03f95da8(plVar8,DAT_09186248,1);
LAB_04531c04:
        (*(code *)*puVar4)(plVar8,puVar4[1]);
        uVar5 = *(uint *)(lVar1 + 0x18);
        uVar11 = uVar11 + 1;
      } while ((int)uVar11 < (int)uVar5);
    }
    lVar1 = *(long *)(param_1 + 0x90);
    if (lVar1 != 0) {
      UnityEngine_MonoBehaviour__StopCoroutine(param_1,lVar1,0);
    }
    if (*(char *)(param_1 + 0x20) == '\0') {
      uVar12 = UnityEngine_Time__get_unscaledTime(0);
    }
    else {
      uVar12 = UnityEngine_Time__get_time(0);
    }
    *(undefined4 *)(param_1 + 0x8c) = uVar12;
    *(undefined4 *)(param_1 + 0x88) = 0;
    uVar9 = Utilities_UI_UIScreenEffect__IERunAnim(param_1);
    uVar9 = UnityEngine_MonoBehaviour__StartCoroutine(param_1,uVar9,0);
    *(undefined8 *)(param_1 + 0x90) = uVar9;
    thunk_FUN_03f5d7b8((long *)(param_1 + 0x90),uVar9);
    return;
  }
LAB_04531c9c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

