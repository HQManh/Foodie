// rea decompile_all
// name: CookingGraph.CookingSelectionRules$$Allows
// address: 0x4406688
// body: available
// range: 0x4406688-0x4406a17 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4406a04 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4406a08 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4406a0c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4406a14 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x04406998) */
/* WARNING: Removing unreachable block (ram,0x04406a10) */

uint CookingGraph_CookingSelectionRules__Allows(long param_1,long *param_2)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long *plVar9;
  undefined8 uVar10;
  
  if ((DAT_09517eaa & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c9280);
    FUN_03f5c2a4(&DAT_091788e0);
    FUN_03f5c2a4(&DAT_091a8258);
    FUN_03f5c2a4(&DAT_09179e10);
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_0917a598);
    FUN_03f5c2a4(&DAT_0917ac48);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_091aca68);
    FUN_03f5c2a4(&DAT_091e8020);
    FUN_03f5c2a4(&DAT_0918f748);
    DAT_09517eaa = 1;
  }
  lVar2 = thunk_FUN_03f9944c(DAT_0918f748);
  System_Object___ctor(lVar2,0);
  if (lVar2 != 0) {
    plVar9 = (long *)(lVar2 + 0x18);
    *plVar9 = param_1;
    thunk_FUN_03f5d7b8(plVar9,param_1);
    if ((*plVar9 != 0) && (lVar6 = *(long *)(*plVar9 + 0x68), lVar6 != 0)) {
      if (*(int *)(lVar6 + 0x18) == 0) {
        uVar1 = 1;
        goto LAB_044069ec;
      }
      uVar3 = thunk_FUN_03f9944c(DAT_09179e10);
      FUN_053eb530(uVar3,DAT_091a8258);
      *(undefined8 *)(lVar2 + 0x10) = uVar3;
      thunk_FUN_03f5d7b8((undefined8 *)(lVar2 + 0x10),uVar3);
      if (param_2 != (long *)0x0) {
        lVar6 = *param_2;
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == DAT_0917a598) {
              puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_0440681c;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar4 = (undefined8 *)FUN_03f95da8(param_2,DAT_0917a598,0);
LAB_0440681c:
        plVar5 = (long *)(*(code *)*puVar4)(param_2,puVar4[1]);
        do {
          if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar6 = *plVar5;
          uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar7 != 0) {
            piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar8 + -2) == DAT_09185b10) {
                puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
                goto LAB_04406898;
              }
              uVar7 = uVar7 - 1;
              piVar8 = piVar8 + 4;
            } while (uVar7 != 0);
          }
          puVar4 = (undefined8 *)FUN_03f95da8(plVar5,DAT_09185b10,0);
LAB_04406898:
          uVar7 = (*(code *)*puVar4)(plVar5,puVar4[1]);
          if ((uVar7 & 1) == 0) {
            if (plVar5 == (long *)0x0) goto LAB_0440698c;
            lVar6 = *plVar5;
            uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
            if (uVar7 == 0) goto LAB_04406964;
            piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            goto LAB_0440694c;
          }
          if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar6 = *plVar5;
          uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar7 != 0) {
            piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar8 + -2) == DAT_0917ac48) {
                puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
                goto LAB_044068fc;
              }
              uVar7 = uVar7 - 1;
              piVar8 = piVar8 + 4;
            } while (uVar7 != 0);
          }
          puVar4 = (undefined8 *)FUN_03f95da8(plVar5,DAT_0917ac48,0);
LAB_044068fc:
          uVar3 = (*(code *)*puVar4)(plVar5,puVar4[1]);
          CookingGraph_CookingSelectionRules_<>c__DisplayClass0_0__<Allows>g__Visit_0(lVar2,uVar3);
        } while( true );
      }
    }
  }
  goto LAB_04406a0c;
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar8 = piVar8 + 4;
    if (uVar7 == 0) break;
LAB_0440694c:
    if (*(long *)(piVar8 + -2) == DAT_09185a58) {
      puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_04406980;
    }
  }
LAB_04406964:
  puVar4 = (undefined8 *)FUN_03f95da8(plVar5,DAT_09185a58,0);
LAB_04406980:
  (*(code *)*puVar4)(plVar5,puVar4[1]);
LAB_0440698c:
  if (*plVar9 != 0) {
    uVar10 = *(undefined8 *)(*plVar9 + 0x68);
    uVar3 = thunk_FUN_03f9944c(DAT_091788e0);
    FUN_05322d94(uVar3,lVar2,DAT_091e8020,0);
    uVar1 = FUN_04ab300c(uVar10,uVar3,DAT_091c9280);
LAB_044069ec:
    return uVar1 & 1;
  }
LAB_04406a0c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

