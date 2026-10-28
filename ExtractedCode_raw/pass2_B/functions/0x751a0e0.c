// rea decompile_all
// name: System.AggregateException$$.ctor
// address: 0x751a0e0
// body: available
// range: 0x751a0e0-0x751a0e3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_AggregateException___ctor(long param_1,undefined8 param_2,long *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  uint uVar11;
  
  if ((DAT_0952173e & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917fed8);
    FUN_03f5c2a4(&DAT_091842a0);
    FUN_03f5c2a4(&DAT_0917a040);
    FUN_03f5c2a4(&DAT_0917b050);
    FUN_03f5c2a4(&DAT_091b9508);
    FUN_03f5c2a4(&DAT_0917e4f8);
    DAT_0952173e = 1;
  }
  if (param_3 == (long *)0x0) {
    if (*(int *)(DAT_091842a0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    System_Exception___ctor(param_1,param_2,0,0);
    thunk_FUN_03fc39d4(&DAT_09181550);
    uVar4 = thunk_FUN_03f9944c();
    uVar7 = thunk_FUN_03fc39d4(&DAT_0921d560);
    System_ArgumentNullException___ctor(uVar4,uVar7);
LAB_0751a450:
    uVar7 = thunk_FUN_03fc39d4(&DAT_091bf880);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar4,uVar7);
  }
  lVar8 = *param_3;
  uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == DAT_0917a040) {
        puVar3 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
        goto LAB_0751a1d0;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  puVar3 = (undefined8 *)FUN_03f95da8(param_3,DAT_0917a040,0);
LAB_0751a1d0:
  iVar1 = (*(code *)*puVar3)(param_3,puVar3[1]);
  if (iVar1 < 1) {
    uVar4 = 0;
  }
  else {
    lVar8 = *param_3;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == DAT_0917b050) {
          puVar3 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_0751a254;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar3 = (undefined8 *)FUN_03f95da8(param_3,DAT_0917b050,0);
LAB_0751a254:
    uVar4 = (*(code *)*puVar3)(param_3,0,puVar3[1]);
  }
  if (*(int *)(DAT_091842a0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  System_Exception___ctor(param_1,param_2,uVar4,0);
  lVar8 = *param_3;
  uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == DAT_0917a040) {
        puVar3 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
        goto LAB_0751a2e0;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  puVar3 = (undefined8 *)FUN_03f95da8(param_3,DAT_0917a040,0);
LAB_0751a2e0:
  uVar2 = (*(code *)*puVar3)(param_3,puVar3[1]);
  plVar5 = (long *)FUN_03f5c394(DAT_0917fed8,uVar2);
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  if (0 < (int)plVar5[3]) {
    uVar11 = 0;
    do {
      lVar8 = *param_3;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == DAT_0917b050) {
            puVar3 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_0751a364;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar3 = (undefined8 *)FUN_03f95da8(param_3,DAT_0917b050,0);
LAB_0751a364:
      lVar8 = (*(code *)*puVar3)(param_3,uVar11,puVar3[1]);
      if ((lVar8 != 0) &&
         (lVar6 = thunk_FUN_03f99350(lVar8,*(undefined8 *)(*plVar5 + 0x40)), lVar6 == 0)) {
        uVar4 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
        FUN_03f5c414(uVar4,0);
      }
      if (*(uint *)(plVar5 + 3) <= uVar11) {
LAB_0751a420:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      plVar5[(long)(int)uVar11 + 4] = lVar8;
      thunk_FUN_03f5d7b8(plVar5 + (long)(int)uVar11 + 4,lVar8);
      if ((uint)plVar5[3] <= uVar11) goto LAB_0751a420;
      if (plVar5[(long)(int)uVar11 + 4] == 0) {
        thunk_FUN_03fc39d4(&DAT_09181548);
        uVar4 = thunk_FUN_03f9944c();
        uVar7 = thunk_FUN_03fc39d4(&DAT_091fb908);
        System_ArgumentException___ctor(uVar4,uVar7);
        goto LAB_0751a450;
      }
      uVar11 = uVar11 + 1;
    } while ((int)uVar11 < (int)(uint)plVar5[3]);
  }
  uVar4 = thunk_FUN_03f9944c(DAT_0917e4f8);
  FUN_05f07778(uVar4,plVar5,DAT_091b9508);
  *(undefined8 *)(param_1 + 0x90) = uVar4;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x90),uVar4);
  return;
}

