// rea decompile_all
// name: System.String$$JoinCore
// address: 0x7431724
// body: available
// range: 0x7431724-0x7431ab3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7431944 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x743199c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74319c0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7431ab0 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long System_String__JoinCore(undefined2 *param_1,int param_2,long param_3,uint param_4,uint param_5)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long *plVar11;
  ulong uVar12;
  ulong uVar13;
  int iVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  int iVar18;
  ulong uVar19;
  
  uVar13 = (ulong)param_4;
  iVar1 = param_5 + param_4;
  uVar16 = (ulong)(param_5 - 1) * (long)param_2;
  lVar17 = param_3;
  while( true ) {
    if ((DAT_0952101d & 1) == 0) {
      FUN_03f5c2a4(&DAT_091805f8);
      DAT_0952101d = 1;
    }
    if (lVar17 == 0) {
      thunk_FUN_03fc39d4(&DAT_09181550);
      uVar6 = thunk_FUN_03f9944c();
      uVar9 = thunk_FUN_03fc39d4(&DAT_09225370);
      System_ArgumentNullException___ctor(uVar6,uVar9,0);
      goto LAB_07431a9c;
    }
    if ((int)param_4 < 0) break;
    if ((int)param_5 < 0) {
      thunk_FUN_03fc39d4(&DAT_09181558);
      uVar6 = thunk_FUN_03f9944c();
      uVar9 = thunk_FUN_03fc39d4(&DAT_09219b28);
      puVar7 = &DAT_091ff7a0;
      goto LAB_07431a84;
    }
    uVar3 = *(uint *)(lVar17 + 0x18);
    if ((int)(uVar3 - param_5) < (int)param_4) {
      thunk_FUN_03fc39d4(&DAT_09181558);
      uVar6 = thunk_FUN_03f9944c();
      uVar9 = thunk_FUN_03fc39d4(&DAT_09223268);
      puVar7 = &DAT_09204928;
      goto LAB_07431a84;
    }
    if (param_5 < 2) {
      if (param_5 != 0) {
        if (uVar3 <= param_4) {
LAB_0743199c:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        lVar17 = *(long *)(param_3 + uVar13 * 8 + 0x20);
        if (lVar17 != 0) {
          return lVar17;
        }
      }
      return **(long **)(DAT_09535468 + 0xb8);
    }
    if (0x7fffffff < (long)uVar16) {
LAB_074319a0:
      thunk_FUN_03fc39d4(&DAT_09188d60);
      uVar6 = thunk_FUN_03f9944c();
      System_OutOfMemoryException___ctor(uVar6,0);
      goto LAB_07431a9c;
    }
    if ((int)param_4 < iVar1) {
      plVar11 = (long *)(lVar17 + (-(ulong)(param_4 >> 0x1f) & 0xfffffff800000000 | uVar13 << 3) +
                                  0x20);
      uVar19 = uVar16 & 0xffffffff;
      lVar5 = (long)iVar1 - (long)(int)param_4;
      uVar12 = uVar13;
      do {
        if (uVar3 <= (uint)uVar12) goto LAB_0743199c;
        if ((*plVar11 != 0) &&
           (uVar2 = *(int *)(*plVar11 + 0x10) + (int)uVar19, uVar19 = (ulong)uVar2, (int)uVar2 < 0))
        goto LAB_074319a0;
        iVar18 = (int)uVar19;
        lVar5 = lVar5 + -1;
        plVar11 = plVar11 + 1;
        uVar12 = (ulong)((uint)uVar12 + 1);
      } while (lVar5 != 0);
      lVar5 = thunk_FUN_03f968a0(uVar19);
      iVar14 = 0;
      if ((int)param_4 < iVar1) {
        lVar15 = (long)(int)param_4;
        do {
          if (*(uint *)(lVar17 + 0x18) <= (uint)lVar15) goto LAB_0743199c;
          lVar10 = *(long *)(lVar17 + 0x20 + lVar15 * 8);
          if (lVar10 != 0) {
            iVar4 = *(int *)(lVar10 + 0x10);
            if (iVar18 - iVar14 < iVar4) {
              iVar14 = -1;
              break;
            }
            System_String__FillStringChecked(lVar5,iVar14);
            iVar14 = iVar4 + iVar14;
          }
          if (lVar15 < iVar1 + -1) {
            if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            if (param_2 == 1) {
              *(undefined2 *)(lVar5 + 0x14 + (long)iVar14 * 2) = *param_1;
            }
            else {
              System_Buffer__Memmove(lVar5 + 0x14 + (long)iVar14 * 2,param_1,param_2 << 1,0);
            }
            iVar14 = iVar14 + param_2;
          }
          lVar15 = lVar15 + 1;
        } while (iVar1 != lVar15);
      }
    }
    else {
      lVar5 = thunk_FUN_03f968a0(uVar16 & 0xffffffff);
      iVar14 = 0;
      iVar18 = (int)uVar16;
    }
    if (iVar14 == iVar18) {
      return lVar5;
    }
    lVar5 = System_Array__Clone(lVar17,0);
    uVar6 = DAT_091805f8;
    lVar17 = 0;
    if ((lVar5 != 0) && (lVar17 = thunk_FUN_03f99350(lVar5,DAT_091805f8), lVar17 == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c8d0(lVar5,uVar6);
    }
  }
  thunk_FUN_03fc39d4(&DAT_09181558);
  uVar6 = thunk_FUN_03f9944c();
  uVar9 = thunk_FUN_03fc39d4(&DAT_09223268);
  puVar7 = &DAT_0920d950;
LAB_07431a84:
  uVar8 = thunk_FUN_03fc39d4(puVar7);
  System_ArgumentOutOfRangeException___ctor(uVar6,uVar9,uVar8,0);
LAB_07431a9c:
  uVar9 = thunk_FUN_03fc39d4(&DAT_091da320);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar6,uVar9);
}

