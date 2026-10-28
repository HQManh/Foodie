// rea decompile_all
// name: FUN_03fa84f8
// address: 0x3fa84f8
// body: available
// range: 0x3fa84f8-0x3fa88a7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x3fa863c to 0x3fa5c38 FUN_03fa5c38 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x3fa87a0 to 0x3fa5c38 FUN_03fa5c38 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_03fa84f8(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  bool bVar2;
  long lVar3;
  bool bVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  char *pcVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long local_118;
  undefined8 local_110 [2];
  undefined8 local_100;
  undefined8 local_f0 [2];
  undefined8 local_e0;
  long local_d8;
  long alStack_d0 [2];
  undefined8 local_c0;
  
  pcVar8 = *(char **)(param_2 + 0x18);
  iVar5 = strcmp(pcVar8,"Windows.Foundation");
  if (iVar5 == 0) {
    pcVar8 = *(char **)(param_2 + 0x10);
    iVar5 = strcmp(pcVar8,"IReference`1");
    if ((iVar5 == 0) || (iVar5 = strcmp(pcVar8,"IReferenceArray`1"), iVar5 == 0)) {
      FUN_03fbea4c(param_2);
      uVar7 = *(undefined8 *)(param_2 + 0x140);
      memset(alStack_d0,0,0xb0);
      local_d8 = 0;
      alStack_d0[0] = param_2;
      local_c0 = param_1;
      uVar7 = FUN_03fbcba4(uVar7,alStack_d0,0,&local_d8);
      if (local_d8 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03fa5c38(local_d8,0);
      }
      return uVar7;
    }
  }
  else {
    iVar5 = strcmp(pcVar8,"System.Collections.Generic");
    if ((iVar5 == 0) && (iVar5 = strcmp(*(char **)(param_2 + 0x10),"KeyValuePair`2"), iVar5 == 0)) {
      FUN_03fbea4c(param_2);
      uVar7 = FUN_03f771b0(uRam0000000009535658,*(undefined8 *)(*(long *)(param_2 + 0x60) + 8));
      lVar9 = FUN_03fb49f4(uVar7,1);
      FUN_03fbea4c();
      uVar12 = *(undefined8 *)(lVar9 + 0x140);
      uVar13 = *(undefined8 *)(lVar9 + 0x150);
      memset(local_110,0,0xb0);
      local_110[0] = uRam0000000009535588;
      local_100 = param_1;
      uVar7 = thunk_FUN_03f9944c(param_2);
      lVar9 = 0;
      bVar4 = true;
      do {
        bVar2 = bVar4;
        puVar1 = (undefined8 *)(*(long *)(param_2 + 0x80) + lVar9 * 0x20);
        pcVar8 = (char *)*puVar1;
        iVar5 = strcmp(pcVar8,"key");
        uVar6 = uVar12;
        if ((iVar5 != 0) && (iVar5 = strcmp(pcVar8,"value"), uVar6 = uVar13, iVar5 != 0)) {
          uVar6 = 0;
        }
        local_118 = 0;
        uVar6 = FUN_03fbcba4(uVar6,local_110,0,&local_118);
        if (local_118 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03fa5c38(local_118,0);
        }
        lVar9 = FUN_03fbe574(puVar1[1],1);
        if (*(int *)(lVar9 + 0x28) < 0) {
          uVar6 = FUN_03f99594(uVar6);
        }
        FUN_03fbb358(uVar7,puVar1,uVar6);
        lVar9 = 1;
        bVar4 = false;
      } while (bVar2);
      return uVar7;
    }
    lVar3 = DAT_09535678;
    lVar9 = lRam0000000009535670;
    if (DAT_09535678 == param_2) {
      FUN_03fbea4c(DAT_09535678);
      FUN_03fbea4c(lVar9);
      uVar7 = *(undefined8 *)(lVar9 + 0x1e0);
      memset(local_f0,0,0xb0);
      local_f0[0] = uRam0000000009535588;
      local_e0 = param_1;
      FUN_03fbcc48(uVar7,local_f0,0);
      uVar10 = (ulong)*(ushort *)(lVar3 + 0x120);
      if (uVar10 != 0) {
        plVar11 = *(long **)(lVar3 + 0x98);
        do {
          lVar9 = *plVar11;
          iVar5 = strcmp(*(char **)(lVar9 + 0x18),".ctor");
          if (((iVar5 == 0) && (*(char *)(lVar9 + 0x52) == '\x01')) &&
             (*(char *)(**(long **)(lVar9 + 0x30) + 10) == '\x0e')) goto LAB_03fa886c;
          uVar10 = uVar10 - 1;
          plVar11 = plVar11 + 1;
        } while (uVar10 != 0);
      }
      lVar9 = 0;
LAB_03fa886c:
      uVar7 = thunk_FUN_03f9944c(lVar3);
      FUN_03fbcc48(lVar9,uVar7,&stack0xffffffffffffffc8);
      return uVar7;
    }
  }
  return 0;
}

