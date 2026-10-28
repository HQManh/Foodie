// rea decompile_all
// name: Utilities.UIAnimShowHideControl.<IEHideWithLinkedUI>d__21$$MoveNext
// address: 0x4520790
// body: available
// range: 0x4520790-0x4520a7f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4520a78 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4520a7c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 Utilities_UIAnimShowHideControl_<IEHideWithLinkedUI>d__21__MoveNext(long param_1)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined4 uVar11;
  
  if ((DAT_095185bd & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_0918ce98);
    DAT_095185bd = 1;
  }
  iVar1 = *(int *)(param_1 + 0x10);
  plVar7 = *(long **)(param_1 + 0x28);
  if (iVar1 == 2) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (plVar7 != (long *)0x0) {
      lVar8 = plVar7[6];
      if ((lVar8 != 0) && (0 < (int)*(ulong *)(lVar8 + 0x18))) {
        uVar4 = 0;
        uVar6 = *(ulong *)(lVar8 + 0x18) & 0xffffffff;
        do {
          if (uVar6 <= uVar4) goto LAB_04520a7c;
          lVar9 = *(long *)(lVar8 + 0x20 + uVar4 * 8);
          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar6 = UnityEngine_Object__op_Implicit(lVar9,0);
          if ((uVar6 & 1) != 0) {
            if (lVar9 == 0) goto LAB_04520a78;
            UnityEngine_Behaviour__set_enabled(lVar9,0,0);
          }
          uVar6 = (ulong)*(uint *)(lVar8 + 0x18);
          uVar4 = uVar4 + 1;
        } while ((long)uVar4 < (long)(int)*(uint *)(lVar8 + 0x18));
      }
      plVar7[5] = 0;
      *(undefined4 *)(plVar7 + 4) = 4;
      thunk_FUN_03f5d7b8(plVar7 + 5,0);
      lVar8 = *(long *)(param_1 + 0x30);
      if (lVar8 != 0) {
        (**(code **)(lVar8 + 0x18))(*(undefined8 *)(lVar8 + 0x40),*(undefined8 *)(lVar8 + 0x28));
      }
      if ((char)plVar7[7] != '\0') {
        lVar8 = UnityEngine_Component__get_gameObject(plVar7,0);
        if (lVar8 == 0) goto LAB_04520a78;
        UnityEngine_GameObject__SetActive(lVar8,0,0);
      }
      return 0;
    }
  }
  else {
    if (iVar1 != 1) {
      if (iVar1 != 0) {
        return 0;
      }
      uVar11 = *(undefined4 *)(param_1 + 0x20);
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      uVar3 = thunk_FUN_03f9944c(DAT_0918ce98);
      UnityEngine_WaitForSecondsRealtime___ctor(uVar11,uVar3,0);
      *(undefined8 *)(param_1 + 0x18) = uVar3;
      thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x18),uVar3);
      *(undefined4 *)(param_1 + 0x10) = 1;
      return 1;
    }
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (plVar7 != (long *)0x0) {
      lVar8 = plVar7[8];
      if ((lVar8 != 0) && (uVar2 = *(uint *)(lVar8 + 0x18), 0 < (int)uVar2)) {
        lVar9 = 0;
        do {
          if (uVar2 <= (uint)lVar9) goto LAB_04520a7c;
          lVar10 = *(long *)(lVar8 + 0x20 + lVar9 * 8);
          if (lVar10 == 0) goto LAB_04520a78;
          uVar3 = *(undefined8 *)(lVar10 + 0x10);
          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar4 = UnityEngine_Object__op_Implicit(uVar3,0);
          if ((uVar4 & 1) != 0) {
            plVar5 = *(long **)(lVar10 + 0x10);
            if (plVar5 == (long *)0x0) goto LAB_04520a78;
            (**(code **)(*plVar5 + 0x1b8))(0,plVar5,0,*(undefined8 *)(*plVar5 + 0x1c0));
          }
          uVar2 = *(uint *)(lVar8 + 0x18);
          lVar9 = lVar9 + 1;
        } while ((int)lVar9 < (int)uVar2);
      }
      lVar8 = plVar7[9];
      if ((lVar8 != 0) && (uVar2 = *(uint *)(lVar8 + 0x18), 0 < (int)uVar2)) {
        lVar9 = 0;
        do {
          if (uVar2 <= (uint)lVar9) {
LAB_04520a7c:
                    /* WARNING: Subroutine does not return */
            FUN_03f5c558();
          }
          lVar10 = *(long *)(lVar8 + 0x20 + lVar9 * 8);
          if (lVar10 == 0) goto LAB_04520a78;
          uVar3 = *(undefined8 *)(lVar10 + 0x10);
          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar4 = UnityEngine_Object__op_Implicit(uVar3,0);
          if ((uVar4 & 1) != 0) {
            plVar5 = *(long **)(lVar10 + 0x10);
            if (plVar5 == (long *)0x0) goto LAB_04520a78;
            (**(code **)(*plVar5 + 0x1b8))(0,plVar5,0,*(undefined8 *)(*plVar5 + 0x1c0));
          }
          uVar2 = *(uint *)(lVar8 + 0x18);
          lVar9 = lVar9 + 1;
        } while ((int)lVar9 < (int)uVar2);
      }
      uVar3 = (**(code **)(*plVar7 + 0x1c8))(plVar7,*(undefined8 *)(*plVar7 + 0x1d0));
      *(undefined8 *)(param_1 + 0x18) = uVar3;
      thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x18),uVar3);
      *(undefined4 *)(param_1 + 0x10) = 2;
      return 1;
    }
  }
LAB_04520a78:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

