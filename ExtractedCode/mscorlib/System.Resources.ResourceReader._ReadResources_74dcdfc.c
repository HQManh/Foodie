// rea decompile_all
// name: System.Resources.ResourceReader$$_ReadResources
// address: 0x74dcdfc
// body: available
// range: 0x74dcdfc-0x74dd4c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74dd310 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74dd314 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74dd364 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */

void System_Resources_ResourceReader___ReadResources(long param_1)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  long *plVar11;
  undefined8 uVar12;
  long lVar13;
  int local_38 [2];
  
  if ((DAT_0952157f & 1) == 0) {
    FUN_03f5c2a4(&DAT_09181610);
    FUN_03f5c2a4(&DAT_091801b8);
    FUN_03f5c2a4(&DAT_0918a138);
    FUN_03f5c2a4(&DAT_091804c0);
    DAT_0952157f = 1;
  }
  plVar7 = *(long **)(param_1 + 0x10);
  if (plVar7 == (long *)0x0) goto LAB_074dd310;
  iVar3 = (**(code **)(*plVar7 + 0x228))(plVar7,*(undefined8 *)(*plVar7 + 0x230));
  if (*(int *)(DAT_0918a138 + 0xe4) == 0) {
    FUN_03f5c424(DAT_0918a138);
  }
  if (iVar3 != **(int **)(DAT_0918a138 + 0xb8)) {
    uVar8 = thunk_FUN_03fc39d4(&DAT_0920dbc8);
    uVar8 = System_Environment__GetResourceString(uVar8,0);
LAB_074dd424:
    thunk_FUN_03fc39d4(&DAT_09181548);
    uVar9 = thunk_FUN_03f9944c();
    System_ArgumentException___ctor(uVar9,uVar8,0);
    goto LAB_074dd350;
  }
  plVar7 = *(long **)(param_1 + 0x10);
  if (plVar7 == (long *)0x0) goto LAB_074dd310;
  uVar4 = (**(code **)(*plVar7 + 0x228))(plVar7,*(undefined8 *)(*plVar7 + 0x230));
  plVar7 = *(long **)(param_1 + 0x10);
  if (plVar7 == (long *)0x0) goto LAB_074dd310;
  uVar5 = (**(code **)(*plVar7 + 0x228))(plVar7,*(undefined8 *)(*plVar7 + 0x230));
  if ((int)(uVar5 | uVar4) < 0) goto LAB_074dd318;
  plVar7 = *(long **)(param_1 + 0x10);
  if (uVar4 < 2) {
    if (plVar7 == (long *)0x0) goto LAB_074dd310;
    uVar8 = (**(code **)(*plVar7 + 0x298))(plVar7,*(undefined8 *)(*plVar7 + 0x2a0));
    if (*(int *)(DAT_0918a138 + 0xe4) == 0) {
      FUN_03f5c424(DAT_0918a138);
    }
    uVar12 = *(undefined8 *)(*(long *)(DAT_0918a138 + 0xb8) + 0x20);
    uVar9 = thunk_FUN_03f9944c(DAT_09181610);
    System_Reflection_AssemblyName___ctor(uVar9,uVar12,0);
    uVar10 = System_Resources_ResourceManager__CompareNames
                       (uVar8,*(undefined8 *)(*(long *)(DAT_0918a138 + 0xb8) + 0x10),uVar9);
    if ((uVar10 & 1) == 0) {
      uVar9 = thunk_FUN_03fc39d4(&DAT_09180318);
      uVar9 = FUN_03f5c394(uVar9,1);
      FUN_039b1d98();
      FUN_039b0da0(uVar9,uVar8);
      FUN_039af17c(uVar9,0,uVar8);
      uVar8 = thunk_FUN_03fc39d4(&DAT_09210558);
      uVar8 = System_Environment__GetResourceString(uVar8,uVar9,0);
      thunk_FUN_03fc39d4(&DAT_09188920);
      uVar9 = thunk_FUN_03f9944c();
      System_NotSupportedException___ctor(uVar9,uVar8,0);
      goto LAB_074dd350;
    }
    System_Resources_ResourceReader__SkipString(param_1);
  }
  else {
    if (plVar7 == (long *)0x0) goto LAB_074dd310;
    plVar7 = (long *)(**(code **)(*plVar7 + 0x188))(plVar7,*(undefined8 *)(*plVar7 + 400));
    if (plVar7 == (long *)0x0) goto LAB_074dd310;
    (**(code **)(*plVar7 + 0x348))(plVar7,uVar5,1,*(undefined8 *)(*plVar7 + 0x350));
  }
  plVar7 = *(long **)(param_1 + 0x10);
  if (plVar7 == (long *)0x0) goto LAB_074dd310;
  iVar3 = (**(code **)(*plVar7 + 0x228))(plVar7,*(undefined8 *)(*plVar7 + 0x230));
  if (1 < iVar3 - 1U) {
    uVar8 = thunk_FUN_03fc39d4(&DAT_09180318);
    uVar8 = FUN_03f5c394(uVar8,2);
    local_38[1] = 2;
    uVar9 = FUN_03f5c42c(DAT_09535420,local_38 + 1);
    FUN_039b1d98(uVar8);
    FUN_039b0da0(uVar8,uVar9);
    FUN_039af17c(uVar8,0,uVar9);
    local_38[0] = iVar3;
    uVar9 = FUN_03f5c42c(DAT_09535420,local_38);
    FUN_039b0da0(uVar8,uVar9);
    FUN_039af17c(uVar8,1,uVar9);
    uVar9 = thunk_FUN_03fc39d4(&DAT_0920ef18);
    uVar8 = System_Environment__GetResourceString(uVar9,uVar8,0);
    goto LAB_074dd424;
  }
  plVar7 = *(long **)(param_1 + 0x10);
  *(int *)(param_1 + 0x78) = iVar3;
  if (plVar7 == (long *)0x0) goto LAB_074dd310;
  iVar3 = (**(code **)(*plVar7 + 0x228))(plVar7,*(undefined8 *)(*plVar7 + 0x230));
  *(int *)(param_1 + 0x68) = iVar3;
  if (-1 < iVar3) {
    plVar7 = *(long **)(param_1 + 0x10);
    if (plVar7 == (long *)0x0) goto LAB_074dd310;
    uVar4 = (**(code **)(*plVar7 + 0x228))(plVar7,*(undefined8 *)(*plVar7 + 0x230));
    if (-1 < (int)uVar4) {
      uVar8 = FUN_03f5c394(DAT_091804c0,uVar4);
      *(undefined8 *)(param_1 + 0x50) = uVar8;
      thunk_FUN_03f5d7b8();
      uVar8 = FUN_03f5c394(DAT_091801b8,uVar4);
      *(undefined8 *)(param_1 + 0x58) = uVar8;
      thunk_FUN_03f5d7b8();
      if (uVar4 != 0) {
        uVar10 = 0;
        do {
          plVar7 = *(long **)(param_1 + 0x10);
          if (plVar7 == (long *)0x0) goto LAB_074dd310;
          lVar13 = *(long *)(param_1 + 0x58);
          plVar7 = (long *)(**(code **)(*plVar7 + 0x188))(plVar7,*(undefined8 *)(*plVar7 + 400));
          if (plVar7 == (long *)0x0) goto LAB_074dd310;
          uVar6 = (**(code **)(*plVar7 + 0x208))(plVar7,*(undefined8 *)(*plVar7 + 0x210));
          if (lVar13 == 0) goto LAB_074dd310;
          if (*(uint *)(lVar13 + 0x18) <= uVar10) goto LAB_074dd314;
          *(undefined4 *)(lVar13 + uVar10 * 4 + 0x20) = uVar6;
          System_Resources_ResourceReader__SkipString(param_1);
          uVar10 = uVar10 + 1;
        } while (uVar4 != uVar10);
      }
      plVar7 = *(long **)(param_1 + 0x10);
      if (plVar7 == (long *)0x0) goto LAB_074dd310;
      plVar7 = (long *)(**(code **)(*plVar7 + 0x188))(plVar7,*(undefined8 *)(*plVar7 + 400));
      if (plVar7 == (long *)0x0) goto LAB_074dd310;
      uVar4 = (**(code **)(*plVar7 + 0x208))(plVar7,*(undefined8 *)(*plVar7 + 0x210));
      if ((uVar4 & 7) != 0) {
        uVar4 = uVar4 & 7 | 0xfffffff8;
        do {
          plVar7 = *(long **)(param_1 + 0x10);
          if (plVar7 == (long *)0x0) goto LAB_074dd310;
          (**(code **)(*plVar7 + 0x1d8))(plVar7,*(undefined8 *)(*plVar7 + 0x1e0));
          bVar2 = uVar4 != 0xffffffff;
          uVar4 = uVar4 + 1;
        } while (bVar2);
      }
      uVar4 = *(uint *)(param_1 + 0x68);
      if (*(long *)(param_1 + 0x70) == 0) {
        uVar8 = FUN_03f5c394(DAT_091801b8,(ulong)uVar4);
        *(undefined8 *)(param_1 + 0x30) = uVar8;
        thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x30),uVar8);
        if (0 < *(int *)(param_1 + 0x68)) {
          uVar10 = 0;
          do {
            plVar7 = *(long **)(param_1 + 0x10);
            if (plVar7 == (long *)0x0) goto LAB_074dd310;
            lVar13 = *(long *)(param_1 + 0x30);
            uVar6 = (**(code **)(*plVar7 + 0x228))(plVar7,*(undefined8 *)(*plVar7 + 0x230));
            if (lVar13 == 0) goto LAB_074dd310;
            if (*(uint *)(lVar13 + 0x18) <= uVar10) goto LAB_074dd314;
            lVar1 = uVar10 * 4;
            uVar10 = uVar10 + 1;
            *(undefined4 *)(lVar13 + lVar1 + 0x20) = uVar6;
          } while ((long)uVar10 < (long)*(int *)(param_1 + 0x68));
        }
      }
      else {
        if (uVar4 >> 0x1d != 0) goto LAB_074dd318;
        uVar8 = System_IO_UnmanagedMemoryStream__get_PositionPointer(*(long *)(param_1 + 0x70),0);
        plVar7 = *(long **)(param_1 + 0x70);
        *(undefined8 *)(param_1 + 0x38) = uVar8;
        if (plVar7 == (long *)0x0) goto LAB_074dd310;
        (**(code **)(*plVar7 + 0x348))(plVar7,(ulong)uVar4 << 2,1,*(undefined8 *)(*plVar7 + 0x350));
        if (*(long *)(param_1 + 0x70) == 0) goto LAB_074dd310;
        System_IO_UnmanagedMemoryStream__get_PositionPointer(*(long *)(param_1 + 0x70),0);
      }
      uVar4 = *(uint *)(param_1 + 0x68);
      if (*(long *)(param_1 + 0x70) == 0) {
        lVar13 = FUN_03f5c394(DAT_091801b8,(ulong)uVar4);
        plVar7 = (long *)(param_1 + 0x40);
        *plVar7 = lVar13;
        thunk_FUN_03f5d7b8(plVar7,lVar13);
        if (0 < *(int *)(param_1 + 0x68)) {
          uVar10 = 0;
          do {
            plVar11 = *(long **)(param_1 + 0x10);
            if (plVar11 == (long *)0x0) goto LAB_074dd310;
            iVar3 = (**(code **)(*plVar11 + 0x228))(plVar11,*(undefined8 *)(*plVar11 + 0x230));
            if (iVar3 < 0) goto LAB_074dd318;
            lVar13 = *plVar7;
            if (lVar13 == 0) goto LAB_074dd310;
            if (*(uint *)(lVar13 + 0x18) <= uVar10) {
LAB_074dd314:
                    /* WARNING: Subroutine does not return */
              FUN_03f5c558();
            }
            lVar1 = uVar10 * 4;
            uVar10 = uVar10 + 1;
            *(int *)(lVar13 + lVar1 + 0x20) = iVar3;
          } while ((long)uVar10 < (long)*(int *)(param_1 + 0x68));
        }
      }
      else {
        if (uVar4 >> 0x1d != 0) goto LAB_074dd318;
        uVar8 = System_IO_UnmanagedMemoryStream__get_PositionPointer(*(long *)(param_1 + 0x70),0);
        plVar7 = *(long **)(param_1 + 0x70);
        *(undefined8 *)(param_1 + 0x48) = uVar8;
        if (plVar7 == (long *)0x0) goto LAB_074dd310;
        (**(code **)(*plVar7 + 0x348))(plVar7,(ulong)uVar4 << 2,1,*(undefined8 *)(*plVar7 + 0x350));
        if (*(long *)(param_1 + 0x70) == 0) goto LAB_074dd310;
        System_IO_UnmanagedMemoryStream__get_PositionPointer(*(long *)(param_1 + 0x70),0);
      }
      plVar7 = *(long **)(param_1 + 0x10);
      if (plVar7 == (long *)0x0) goto LAB_074dd310;
      iVar3 = (**(code **)(*plVar7 + 0x228))(plVar7,*(undefined8 *)(*plVar7 + 0x230));
      *(long *)(param_1 + 0x28) = (long)iVar3;
      if (-1 < iVar3) {
        plVar7 = *(long **)(param_1 + 0x10);
        if (plVar7 == (long *)0x0) {
LAB_074dd310:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        plVar7 = (long *)(**(code **)(*plVar7 + 0x188))(plVar7,*(undefined8 *)(*plVar7 + 400));
        if (plVar7 == (long *)0x0) goto LAB_074dd310;
        lVar13 = (**(code **)(*plVar7 + 0x208))(plVar7,*(undefined8 *)(*plVar7 + 0x210));
        *(long *)(param_1 + 0x20) = lVar13;
        if (lVar13 <= *(long *)(param_1 + 0x28)) {
          return;
        }
      }
    }
  }
LAB_074dd318:
  uVar8 = thunk_FUN_03fc39d4(&DAT_091ff348);
  uVar8 = System_Environment__GetResourceString(uVar8,0);
  thunk_FUN_03fc39d4(&DAT_091819f8);
  uVar9 = thunk_FUN_03f9944c();
  System_BadImageFormatException___ctor(uVar9,uVar8,0);
LAB_074dd350:
  uVar8 = thunk_FUN_03fc39d4(&DAT_091d7d18);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar9,uVar8);
}

