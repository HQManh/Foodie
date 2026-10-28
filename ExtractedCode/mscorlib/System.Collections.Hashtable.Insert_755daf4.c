// rea decompile_all
// name: System.Collections.Hashtable$$Insert
// address: 0x755daf4
// body: available
// range: 0x755daf4-0x755df6f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x755de64 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x755de68 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x755dec4 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x755df38 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Collections_Hashtable__Insert
               (long *param_1,long param_2,undefined8 param_3,ulong param_4)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  ulong uVar11;
  uint *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  ulong uVar18;
  
  if (param_2 == 0) {
    thunk_FUN_03fc39d4(&DAT_09181550);
    uVar7 = thunk_FUN_03f9944c();
    uVar14 = thunk_FUN_03fc39d4(&DAT_0921df98);
    uVar13 = thunk_FUN_03fc39d4(&DAT_092065e8);
    System_ArgumentNullException___ctor(uVar7,uVar14,uVar13,0);
LAB_0755deb0:
    uVar14 = thunk_FUN_03fc39d4(&DAT_091ce710);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar7,uVar14);
  }
  if ((int)param_1[3] < (int)param_1[4]) {
    if ((100 < (int)param_1[3]) && ((int)param_1[4] < *(int *)((long)param_1 + 0x1c))) {
      System_Collections_Hashtable__rehash(param_1);
    }
  }
  else {
    System_Collections_Hashtable__expand(param_1);
  }
  if (param_1[2] != 0) {
    uVar14 = *(undefined8 *)(param_1[2] + 0x18);
    uVar4 = (**(code **)(*param_1 + 0x338))(param_1,param_2,*(undefined8 *)(*param_1 + 0x340));
    lVar9 = param_1[2];
    if (lVar9 != 0) {
      uVar4 = uVar4 & 0x7fffffff;
      uVar2 = (int)uVar14 - 1;
      uVar11 = *(ulong *)(lVar9 + 0x18);
      iVar16 = 0;
      uVar15 = 0xffffffff;
      uVar17 = 0;
      uVar10 = (uint)uVar11;
      if (uVar10 != 0) {
        uVar17 = uVar4 / uVar10;
      }
      uVar3 = 0;
      if (uVar2 != 0) {
        uVar3 = (uVar4 * 0x65) / uVar2;
      }
      uVar18 = (ulong)(uVar4 - uVar17 * uVar10);
      do {
        uVar17 = (uint)uVar18;
        if (uVar15 == 0xffffffff) {
          if ((uint)uVar11 <= uVar17) goto LAB_0755de64;
          if (*(long *)(lVar9 + 0x20 + (long)(int)uVar17 * 0x18) == lVar9) {
            uVar15 = uVar17;
            if (-1 < *(int *)(lVar9 + 0x20 + (long)(int)uVar17 * 0x18 + 0x10)) {
              uVar15 = 0xffffffff;
            }
          }
          else {
            uVar15 = 0xffffffff;
          }
        }
        if ((uint)uVar11 <= uVar17) goto LAB_0755de64;
        lVar8 = *(long *)(lVar9 + 0x20 + (long)(int)uVar17 * 0x18);
        if ((lVar8 == 0) ||
           ((uVar10 = *(uint *)(lVar9 + 0x20 + (long)(int)uVar17 * 0x18 + 0x10), lVar8 == lVar9 &&
            (-1 < (int)uVar10)))) {
          if (uVar15 != 0xffffffff) {
            uVar17 = uVar15;
          }
          thunk_FUN_03f6a5cc();
          lVar9 = param_1[2];
          *(undefined1 *)((long)param_1 + 0x2c) = 1;
          if (lVar9 == 0) break;
          if (*(uint *)(lVar9 + 0x18) <= uVar17) goto LAB_0755de64;
          puVar5 = (undefined8 *)(lVar9 + (long)(int)uVar17 * 0x18 + 0x28);
          *puVar5 = param_3;
          thunk_FUN_03f5d7b8(puVar5,param_3);
          lVar9 = param_1[2];
          if (lVar9 == 0) break;
          if (*(uint *)(lVar9 + 0x18) <= uVar17) goto LAB_0755de64;
          plVar6 = (long *)(lVar9 + (long)(int)uVar17 * 0x18 + 0x20);
          *plVar6 = param_2;
          thunk_FUN_03f5d7b8(plVar6,param_2);
          lVar9 = param_1[2];
          if (lVar9 == 0) break;
          if (*(uint *)(lVar9 + 0x18) <= uVar17) goto LAB_0755de64;
          lVar9 = lVar9 + (long)(int)uVar17 * 0x18;
          goto LAB_0755de14;
        }
        if ((uVar10 & 0x7fffffff) == uVar4) {
          uVar11 = (**(code **)(*param_1 + 0x378))
                             (param_1,lVar8,param_2,*(undefined8 *)(*param_1 + 0x380));
          if ((uVar11 & 1) != 0) {
            if ((param_4 & 1) != 0) {
              lVar9 = param_1[2];
              FUN_039b1d98(lVar9);
              puVar5 = (undefined8 *)FUN_03eb39c8(lVar9,(long)(int)uVar17);
              uVar13 = *puVar5;
              uVar14 = thunk_FUN_03fc39d4(&DAT_09206220);
              uVar14 = SR__Format(uVar14,uVar13,param_2,0);
              thunk_FUN_03fc39d4(&DAT_09181548);
              uVar13 = thunk_FUN_03f9944c();
              System_ArgumentException___ctor(uVar13,uVar14,0);
              uVar14 = thunk_FUN_03fc39d4(&DAT_091ce710);
                    /* WARNING: Subroutine does not return */
              FUN_03f5c414(uVar13,uVar14);
            }
            thunk_FUN_03f6a5cc();
            lVar9 = param_1[2];
            *(undefined1 *)((long)param_1 + 0x2c) = 1;
            if (lVar9 == 0) break;
            if (*(uint *)(lVar9 + 0x18) <= uVar17) goto LAB_0755de64;
            puVar5 = (undefined8 *)(lVar9 + (long)(int)uVar17 * 0x18 + 0x28);
            *puVar5 = param_3;
            thunk_FUN_03f5d7b8(puVar5,param_3);
            goto LAB_0755de2c;
          }
          lVar9 = param_1[2];
        }
        if (uVar15 == 0xffffffff) {
          if (lVar9 == 0) break;
          if (*(uint *)(lVar9 + 0x18) <= uVar17) goto LAB_0755de64;
          puVar12 = (uint *)(lVar9 + (long)(int)uVar17 * 0x18 + 0x30);
          uVar10 = *puVar12;
          if (-1 < (int)uVar10) {
            *puVar12 = uVar10 | 0x80000000;
            *(int *)((long)param_1 + 0x1c) = *(int *)((long)param_1 + 0x1c) + 1;
          }
          uVar11 = *(ulong *)(lVar9 + 0x18);
          if ((int)uVar11 <= iVar16 + 1) {
            thunk_FUN_03fc39d4(&DAT_091870e0);
            uVar7 = thunk_FUN_03f9944c();
            uVar14 = thunk_FUN_03fc39d4(&DAT_09203de0);
            System_InvalidOperationException___ctor(uVar7,uVar14,0);
            goto LAB_0755deb0;
          }
        }
        else {
          if (lVar9 == 0) break;
          uVar11 = *(ulong *)(lVar9 + 0x18);
          if ((int)uVar11 <= iVar16 + 1) goto LAB_0755dd98;
        }
        iVar16 = iVar16 + 1;
        lVar8 = (long)(int)uVar17 + (ulong)((uVar4 * 0x65 - uVar3 * uVar2) + 1);
        uVar11 = uVar11 & 0xffffffff;
        lVar1 = 0;
        if (uVar11 != 0) {
          lVar1 = lVar8 / (long)uVar11;
        }
        uVar18 = lVar8 - lVar1 * uVar11;
      } while( true );
    }
  }
LAB_0755de68:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
LAB_0755dd98:
  thunk_FUN_03f6a5cc();
  lVar9 = param_1[2];
  *(undefined1 *)((long)param_1 + 0x2c) = 1;
  if (lVar9 != 0) {
    if (uVar15 < *(uint *)(lVar9 + 0x18)) {
      puVar5 = (undefined8 *)(lVar9 + (long)(int)uVar15 * 0x18 + 0x28);
      *puVar5 = param_3;
      thunk_FUN_03f5d7b8(puVar5,param_3);
      lVar9 = param_1[2];
      if (lVar9 == 0) goto LAB_0755de68;
      if (uVar15 < *(uint *)(lVar9 + 0x18)) {
        plVar6 = (long *)(lVar9 + (long)(int)uVar15 * 0x18 + 0x20);
        *plVar6 = param_2;
        thunk_FUN_03f5d7b8(plVar6,param_2);
        lVar9 = param_1[2];
        if (lVar9 == 0) goto LAB_0755de68;
        if (uVar15 < *(uint *)(lVar9 + 0x18)) {
          lVar9 = lVar9 + (long)(int)uVar15 * 0x18;
LAB_0755de14:
          *(uint *)(lVar9 + 0x30) = *(uint *)(lVar9 + 0x30) | uVar4;
          *(int *)(param_1 + 3) = (int)param_1[3] + 1;
LAB_0755de2c:
          lVar9 = param_1[5];
          thunk_FUN_03f6a5cc();
          thunk_FUN_03f6a5cc();
          *(int *)(param_1 + 5) = (int)lVar9 + 1;
          thunk_FUN_03f6a5cc();
          *(undefined1 *)((long)param_1 + 0x2c) = 0;
          return;
        }
      }
    }
LAB_0755de64:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c558();
  }
  goto LAB_0755de68;
}

