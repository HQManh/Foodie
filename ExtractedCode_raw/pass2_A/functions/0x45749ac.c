// rea decompile_all
// name: DG.Tweening.Core.TweenManager$$ReorganizeActiveTweens
// address: 0x45749ac
// body: available
// range: 0x45749ac-0x4574c07 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4574bf4 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4574bf8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4574c04 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void DG_Tweening_Core_TweenManager__ReorganizeActiveTweens(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  int iVar9;
  uint uVar10;
  long *plVar11;
  uint uVar12;
  
  if ((DAT_095188df & 1) == 0) {
    FUN_03f5c2a4(&DAT_0918c158);
    DAT_095188df = 1;
  }
  if (*(int *)(DAT_0918c158 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar3 = *(long *)(DAT_0918c158 + 0xb8);
  if (*(int *)(lVar3 + 0x18) < 1) {
    if (*(int *)(DAT_0918c158 + 0xe4) == 0) {
      FUN_03f5c424();
      lVar3 = *(long *)(DAT_0918c158 + 0xb8);
    }
    iVar4 = -1;
  }
  else {
    if (*(int *)(DAT_0918c158 + 0xe4) == 0) {
      FUN_03f5c424();
      lVar3 = *(long *)(DAT_0918c158 + 0xb8);
    }
    iVar4 = *(int *)(lVar3 + 0x7c);
    iVar5 = *(int *)(lVar3 + 0x74);
    if (iVar4 != iVar5) {
      if (*(int *)(DAT_0918c158 + 0xe4) == 0) {
        FUN_03f5c424();
        lVar3 = *(long *)(DAT_0918c158 + 0xb8);
        iVar5 = *(int *)(lVar3 + 0x74);
        iVar4 = *(int *)(lVar3 + 0x7c);
      }
      lVar1 = DAT_0918c158;
      uVar10 = iVar4 + 1;
      *(int *)(lVar3 + 0x74) = iVar4 + -1;
      if ((int)uVar10 < iVar5 + 1) {
        lVar7 = 0;
        lVar8 = 0;
        lVar3 = (-(ulong)(uVar10 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar10 << 3) + 0x20;
        iVar9 = 1;
        do {
          if (*(int *)(lVar1 + 0xe4) == 0) {
            FUN_03f5c424();
            lVar1 = DAT_0918c158;
          }
          plVar11 = *(long **)(*(long *)(lVar1 + 0xb8) + 0x48);
          if (plVar11 == (long *)0x0) {
LAB_04574bf8:
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          uVar10 = iVar4 + (int)lVar8 + 1;
          if (*(uint *)(plVar11 + 3) <= uVar10) {
LAB_04574bf4:
                    /* WARNING: Subroutine does not return */
            FUN_03f5c558();
          }
          lVar6 = *(long *)((long)plVar11 + lVar8 * 8 + lVar3);
          if (lVar6 == 0) {
            iVar9 = iVar9 + 1;
          }
          else {
            uVar12 = ((iVar4 + (int)lVar8) - iVar9) + 1;
            if (*(int *)(lVar1 + 0xe4) == 0) {
              FUN_03f5c424();
              lVar1 = DAT_0918c158;
              *(uint *)(lVar6 + 0xf8) = uVar12;
              plVar11 = *(long **)(*(long *)(lVar1 + 0xb8) + 0x48);
              *(uint *)(*(long *)(lVar1 + 0xb8) + 0x74) = uVar12;
              if (plVar11 == (long *)0x0) goto LAB_04574bf8;
            }
            else {
              *(uint *)(*(long *)(lVar1 + 0xb8) + 0x74) = uVar12;
              *(uint *)(lVar6 + 0xf8) = uVar12;
            }
            lVar1 = thunk_FUN_03f99350(lVar6,*(undefined8 *)(*plVar11 + 0x40));
            if (lVar1 == 0) {
              uVar2 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
              FUN_03f5c414(uVar2,0);
            }
            if (*(uint *)(plVar11 + 3) <= uVar12) goto LAB_04574bf4;
            plVar11[(long)(int)uVar12 + 4] = lVar6;
            thunk_FUN_03f5d7b8(plVar11 + (long)(int)uVar12 + 4,lVar6);
            lVar1 = *(long *)(*(long *)(DAT_0918c158 + 0xb8) + 0x48);
            if (lVar1 == 0) goto LAB_04574bf8;
            if (*(uint *)(lVar1 + 0x18) <= uVar10) goto LAB_04574bf4;
            lVar1 = lVar1 + lVar3;
            *(undefined8 *)(lVar1 + lVar8 * 8) = 0;
            thunk_FUN_03f5d7b8(lVar1 + lVar7,0);
            lVar1 = DAT_0918c158;
          }
          lVar8 = lVar8 + 1;
          lVar7 = lVar7 + 8;
        } while ((iVar4 - iVar5) + (int)lVar8 != 0);
      }
      if (*(int *)(lVar1 + 0xe4) == 0) {
        FUN_03f5c424();
        lVar1 = DAT_0918c158;
      }
      lVar3 = *(long *)(lVar1 + 0xb8);
      goto LAB_04574bcc;
    }
    if (*(int *)(DAT_0918c158 + 0xe4) == 0) {
      FUN_03f5c424();
      lVar3 = *(long *)(DAT_0918c158 + 0xb8);
      iVar4 = *(int *)(lVar3 + 0x74);
    }
    iVar4 = iVar4 + -1;
  }
  *(int *)(lVar3 + 0x74) = iVar4;
LAB_04574bcc:
  *(undefined1 *)(lVar3 + 0x78) = 0;
  *(undefined4 *)(lVar3 + 0x7c) = 0xffffffff;
  return;
}

