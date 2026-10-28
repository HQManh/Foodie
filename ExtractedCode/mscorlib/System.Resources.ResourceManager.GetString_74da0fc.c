// rea decompile_all
// name: System.Resources.ResourceManager$$GetString
// address: 0x74da0fc
// body: available
// range: 0x74da0fc-0x74da4cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74da464 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74da468 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74da4b0 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74da4b4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74da4b8 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74da4bc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74da4c0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74da4c8 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74da4cc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x074da3c8) */
/* WARNING: Removing unreachable block (ram,0x074da4c4) */
/* WARNING: Removing unreachable block (ram,0x074da4b8) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

long System_Resources_ResourceManager__GetString(long *param_1,long param_2,long param_3)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  undefined8 *puVar4;
  long *plVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  int *piVar10;
  long lVar11;
  char local_5c [4];
  long local_58;
  
  if ((DAT_09521571 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_0917ab30);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_0918a108);
    DAT_09521571 = 1;
  }
  local_58 = 0;
  local_5c[0] = '\0';
  if (param_2 == 0) {
    thunk_FUN_03fc39d4(&DAT_09181550);
    uVar7 = thunk_FUN_03f9944c();
    uVar8 = thunk_FUN_03fc39d4(&DAT_0921fa28);
    System_ArgumentNullException___ctor(uVar7,uVar8,0);
    uVar8 = thunk_FUN_03fc39d4(&DAT_091d7a98);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar7,uVar8);
  }
  if (param_3 == 0) {
    lVar1 = System_Threading_Thread__get_CurrentThread(0);
    if (lVar1 == 0) goto LAB_074da4b4;
    param_3 = System_Threading_Thread__GetCurrentUICultureNoAppX(lVar1,0);
  }
  plVar2 = (long *)System_Resources_ResourceManager__GetFirstResourceSet(param_1,param_3);
  if ((plVar2 == (long *)0x0) ||
     (lVar1 = (**(code **)(*plVar2 + 0x1c8))
                        (plVar2,param_2,(char)param_1[0xb],*(undefined8 *)(*plVar2 + 0x1d0)),
     lVar1 == 0)) {
    lVar11 = param_1[9];
    lVar1 = thunk_FUN_03f9944c(DAT_0918a108);
    System_Resources_ResourceFallbackManager___ctor(lVar1,param_3,lVar11,1);
    if (lVar1 == 0) {
LAB_074da4b4:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    plVar3 = (long *)System_Resources_ResourceFallbackManager__GetEnumerator(lVar1);
    do {
      if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar1 = *plVar3;
      uVar9 = (ulong)*(ushort *)(lVar1 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == DAT_09185b10) {
            puVar4 = (undefined8 *)(lVar1 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_074da268;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar4 = (undefined8 *)FUN_03f95da8(plVar3,DAT_09185b10,0);
LAB_074da268:
      uVar9 = (*(code *)*puVar4)(plVar3,puVar4[1]);
      if ((uVar9 & 1) == 0) {
LAB_074da3cc:
        lVar1 = 0;
        goto LAB_074da3d0;
      }
      if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar1 = *plVar3;
      uVar9 = (ulong)*(ushort *)(lVar1 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == DAT_0917ab30) {
            puVar4 = (undefined8 *)(lVar1 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_074da2cc;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar4 = (undefined8 *)FUN_03f95da8(plVar3,DAT_0917ab30,0);
LAB_074da2cc:
      plVar5 = (long *)(*(code *)*puVar4)(plVar3,puVar4[1]);
      plVar6 = (long *)(**(code **)(*param_1 + 0x198))
                                 (param_1,plVar5,1,1,*(undefined8 *)(*param_1 + 0x1a0));
      if (plVar6 == (long *)0x0) goto LAB_074da3cc;
    } while ((plVar6 == plVar2) ||
            (lVar1 = (**(code **)(*plVar6 + 0x1c8))
                               (plVar6,param_2,(char)param_1[0xb],*(undefined8 *)(*plVar6 + 0x1d0)),
            plVar2 = plVar6, lVar1 == 0));
    lVar11 = param_1[10];
    if (lVar11 != 0) {
      local_5c[0] = '\0';
      local_58 = lVar11;
      System_Threading_Monitor__Enter(lVar11,local_5c,0);
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar11 = param_1[10];
      uVar7 = (**(code **)(*plVar5 + 0x1a8))(plVar5,*(undefined8 *)(*plVar5 + 0x1b0));
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      puVar4 = (undefined8 *)(lVar11 + 0x10);
      *puVar4 = uVar7;
      thunk_FUN_03f5d7b8(puVar4);
      if (param_1[10] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      plVar2 = (long *)(param_1[10] + 0x18);
      *plVar2 = (long)plVar6;
      thunk_FUN_03f5d7b8(plVar2,plVar6);
      if (local_5c[0] != '\0') {
        System_Threading_Monitor__Exit(local_58,0);
      }
    }
LAB_074da3d0:
    if (plVar3 != (long *)0x0) {
      lVar11 = *plVar3;
      uVar9 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == DAT_09185a58) {
            puVar4 = (undefined8 *)(lVar11 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_074da430;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar4 = (undefined8 *)FUN_03f95da8(plVar3,DAT_09185a58,0);
LAB_074da430:
      (*(code *)*puVar4)(plVar3,puVar4[1]);
    }
  }
  return lVar1;
}

