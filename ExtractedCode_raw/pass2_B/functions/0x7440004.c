// rea decompile_all
// name: System.Text.StringBuilder$$MakeRoom
// address: 0x7440004
// body: available
// range: 0x7440004-0x74402e3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74400d0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7440284 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74402e0 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Text_StringBuilder__MakeRoom
               (long param_1,int param_2,int param_3,long *param_4,int *param_5,uint param_6)

{
  long lVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  uint uVar14;
  undefined8 uVar15;
  
  if ((DAT_09521079 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09187e80);
    FUN_03f5c2a4(&DAT_0918b348);
    DAT_09521079 = 1;
  }
  iVar7 = *(int *)(param_1 + 0x24) + param_3 + *(int *)(param_1 + 0x20);
  if ((*(int *)(param_1 + 0x28) < iVar7) || (iVar7 < param_3)) {
    thunk_FUN_03fc39d4(&DAT_09181558);
    uVar15 = thunk_FUN_03f9944c();
    uVar9 = thunk_FUN_03fc39d4(&DAT_09221978);
    uVar10 = thunk_FUN_03fc39d4(&DAT_092188e0);
    System_ArgumentOutOfRangeException___ctor(uVar15,uVar9,uVar10,0);
    uVar9 = thunk_FUN_03fc39d4(&DAT_091da450);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar15,uVar9);
  }
  *param_4 = param_1;
  thunk_FUN_03f5d7b8(param_4,param_1);
  lVar11 = *param_4;
  do {
    if (lVar11 == 0) {
LAB_074400d0:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    iVar7 = *(int *)(lVar11 + 0x24);
    iVar5 = param_2 - iVar7;
    if (iVar7 <= param_2) {
      *param_5 = iVar5;
      if ((param_6 & 1) == 0) {
        uVar4 = *(uint *)(lVar11 + 0x20);
        lVar12 = (long)(int)uVar4;
        if ((int)uVar4 < 0x21) {
          lVar13 = *(long *)(lVar11 + 0x10);
          if (lVar13 == 0) goto LAB_074400d0;
          uVar2 = *(uint *)(lVar13 + 0x18);
          if (param_3 <= (int)(uVar2 - uVar4)) {
            if ((int)uVar4 <= iVar5) goto LAB_07440264;
            uVar14 = uVar4;
            while ((uVar14 = uVar14 - 1, uVar14 < uVar2 && (param_3 + uVar14 < uVar2))) {
              lVar1 = lVar12 * 2;
              lVar12 = lVar12 + -1;
              *(undefined2 *)(lVar13 + (long)(int)(param_3 + uVar14) * 2 + 0x20) =
                   *(undefined2 *)(lVar13 + 0x1e + lVar1);
              if (lVar12 <= iVar5) {
LAB_07440264:
                *(uint *)(lVar11 + 0x20) = uVar4 + param_3;
                return;
              }
            }
LAB_07440284:
                    /* WARNING: Subroutine does not return */
            FUN_03f5c558();
          }
        }
      }
      if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar6 = System_Math__Max(param_3,0x10,0);
      lVar11 = *param_4;
      if (lVar11 == 0) goto LAB_074400d0;
      uVar3 = *(undefined4 *)(lVar11 + 0x28);
      uVar15 = *(undefined8 *)(lVar11 + 0x18);
      lVar11 = thunk_FUN_03f9944c(DAT_0918b348);
      System_Text_StringBuilder___ctor(lVar11,uVar6,uVar3,uVar15);
      if (lVar11 == 0) goto LAB_074400d0;
      *(int *)(lVar11 + 0x20) = param_3;
      iVar7 = System_Math__Min(param_3,*param_5,0);
      if (0 < iVar7) {
        if ((*param_4 == 0) || (lVar12 = *(long *)(*param_4 + 0x10), lVar12 == 0))
        goto LAB_074400d0;
        if (*(int *)(lVar12 + 0x18) == 0) goto LAB_07440284;
        System_Text_StringBuilder__ThreadSafeCopy
                  (lVar12 + 0x20,*(undefined8 *)(lVar11 + 0x10),0,iVar7);
        iVar5 = *param_5 - iVar7;
        if (-1 < iVar5) {
          if (*param_4 == 0) goto LAB_074400d0;
          System_Text_StringBuilder__ThreadSafeCopy
                    (lVar12 + 0x20 + (ulong)(uint)(iVar7 << 1),*(undefined8 *)(*param_4 + 0x10),0,
                     iVar5);
          *param_5 = iVar5;
        }
      }
      if (*param_4 != 0) {
        plVar8 = (long *)(*param_4 + 0x18);
        *plVar8 = lVar11;
        thunk_FUN_03f5d7b8(plVar8,lVar11);
        lVar12 = *param_4;
        if (lVar12 != 0) {
          *(int *)(lVar12 + 0x24) = *(int *)(lVar12 + 0x24) + param_3;
          if (param_3 <= iVar7) {
            return;
          }
          *param_4 = lVar11;
          thunk_FUN_03f5d7b8(param_4,lVar11);
          *param_5 = iVar7;
          return;
        }
      }
      goto LAB_074400d0;
    }
    *(int *)(lVar11 + 0x24) = iVar7 + param_3;
    *param_4 = *(long *)(lVar11 + 0x18);
    thunk_FUN_03f5d7b8(param_4);
    lVar11 = *param_4;
  } while( true );
}

