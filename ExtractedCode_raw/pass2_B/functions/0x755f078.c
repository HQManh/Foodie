// rea decompile_all
// name: System.Collections.Hashtable$$Remove
// address: 0x755f078
// body: available
// range: 0x755f078-0x755f27f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x755f21c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x755f220 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x755f27c to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Collections_Hashtable__Remove(long *param_1,long param_2)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  uint uVar10;
  ulong uVar11;
  long lVar12;
  uint uVar13;
  int iVar14;
  undefined8 uVar15;
  int iVar16;
  
  if (param_2 == 0) {
    thunk_FUN_03fc39d4(&DAT_09181550);
    uVar15 = thunk_FUN_03f9944c();
    uVar7 = thunk_FUN_03fc39d4(&DAT_0921df98);
    uVar8 = thunk_FUN_03fc39d4(&DAT_092065e8);
    System_ArgumentNullException___ctor(uVar15,uVar7,uVar8,0);
    uVar7 = thunk_FUN_03fc39d4(&DAT_091ce720);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar15,uVar7);
  }
  if (param_1[2] != 0) {
    uVar15 = *(undefined8 *)(param_1[2] + 0x18);
    uVar5 = (**(code **)(*param_1 + 0x338))(param_1,param_2,*(undefined8 *)(*param_1 + 0x340));
    lVar9 = param_1[2];
    if (lVar9 != 0) {
      uVar5 = uVar5 & 0x7fffffff;
      uVar3 = (int)uVar15 - 1;
      uVar11 = *(ulong *)(lVar9 + 0x18);
      uVar13 = 0;
      uVar10 = (uint)uVar11;
      if (uVar10 != 0) {
        uVar13 = uVar5 / uVar10;
      }
      uVar4 = 0;
      if (uVar3 != 0) {
        uVar4 = (uVar5 * 0x65) / uVar3;
      }
      uVar13 = uVar5 - uVar13 * uVar10;
      iVar16 = 1;
LAB_0755f0f0:
      if (uVar13 < (uint)uVar11) {
        lVar12 = lVar9 + (long)(int)uVar13 * 0x18;
        uVar10 = *(uint *)(lVar12 + 0x30);
        if ((uVar10 & 0x7fffffff) == uVar5) {
          uVar11 = (**(code **)(*param_1 + 0x378))
                             (param_1,*(undefined8 *)(lVar12 + 0x20),param_2,
                              *(undefined8 *)(*param_1 + 0x380));
          if ((uVar11 & 1) != 0) {
            thunk_FUN_03f6a5cc();
            lVar9 = param_1[2];
            *(undefined1 *)((long)param_1 + 0x2c) = 1;
            if (lVar9 == 0) goto LAB_0755f220;
            if (uVar13 < *(uint *)(lVar9 + 0x18)) {
              lVar12 = lVar9 + (long)(int)uVar13 * 0x18;
              uVar5 = *(uint *)(lVar12 + 0x30);
              *(uint *)(lVar12 + 0x30) = uVar5 & 0x80000000;
              if ((int)uVar5 < 0) {
                *(long *)(lVar12 + 0x20) = lVar9;
              }
              else {
                lVar9 = 0;
                *(undefined8 *)(lVar12 + 0x20) = 0;
              }
              thunk_FUN_03f5d7b8(lVar12 + 0x20,lVar9);
              lVar9 = param_1[2];
              if (lVar9 != 0) {
                if (uVar13 < *(uint *)(lVar9 + 0x18)) {
                  puVar6 = (undefined8 *)(lVar9 + (long)(int)uVar13 * 0x18 + 0x28);
                  *puVar6 = 0;
                  thunk_FUN_03f5d7b8(puVar6,0);
                  lVar9 = param_1[5];
                  *(int *)(param_1 + 3) = (int)param_1[3] + -1;
                  thunk_FUN_03f6a5cc();
                  thunk_FUN_03f6a5cc();
                  *(int *)(param_1 + 5) = (int)lVar9 + 1;
                  thunk_FUN_03f6a5cc();
                  *(undefined1 *)((long)param_1 + 0x2c) = 0;
                  return;
                }
                goto LAB_0755f21c;
              }
              goto LAB_0755f220;
            }
            goto LAB_0755f21c;
          }
          lVar9 = param_1[2];
          if (lVar9 == 0) goto LAB_0755f220;
        }
        if (-1 < (int)uVar10) {
          return;
        }
        lVar12 = (long)(int)uVar13 + (ulong)((uVar5 * 0x65 - uVar4 * uVar3) + 1);
        uVar11 = *(ulong *)(lVar9 + 0x18) & 0xffffffff;
        iVar14 = (int)*(ulong *)(lVar9 + 0x18);
        iVar2 = 0;
        if (uVar11 != 0) {
          iVar2 = (int)(lVar12 / (long)uVar11);
        }
        uVar13 = (int)lVar12 - iVar2 * iVar14;
        bVar1 = iVar14 <= iVar16;
        iVar16 = iVar16 + 1;
        if (bVar1) {
          return;
        }
        goto LAB_0755f0f0;
      }
LAB_0755f21c:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
  }
LAB_0755f220:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

