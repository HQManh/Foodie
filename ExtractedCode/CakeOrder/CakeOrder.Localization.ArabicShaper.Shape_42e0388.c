// rea decompile_all
// name: CakeOrder.Localization.ArabicShaper$$Shape
// address: 0x42e0388
// body: available
// range: 0x42e0388-0x42e07b7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42e07b0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42e07b4 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long CakeOrder_Localization_ArabicShaper__Shape(long param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  long *plVar8;
  undefined2 *puVar9;
  ushort *puVar10;
  int iVar11;
  long lVar12;
  long local_68;
  
  if ((DAT_09517431 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09181520);
    FUN_03f5c2a4(&DAT_0919c658);
    FUN_03f5c2a4(&DAT_0919c660);
    FUN_03f5c2a4(&DAT_0919c668);
    FUN_03f5c2a4(&DAT_0918b348);
    DAT_09517431 = 1;
  }
  local_68 = 0;
  if (*(int *)(DAT_09181520 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar7 = CakeOrder_Localization_ArabicShaper__ContainsArabic(param_1);
  if ((uVar7 & 1) == 0) {
    return param_1;
  }
  if (param_1 == 0) {
LAB_042e07b0:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  uVar4 = *(undefined4 *)(param_1 + 0x10);
  plVar8 = (long *)thunk_FUN_03f9944c(DAT_0918b348);
  System_Text_StringBuilder___ctor(plVar8,uVar4,0);
  if (*(int *)(param_1 + 0x10) < 1) {
LAB_042e0774:
    if (plVar8 != (long *)0x0) {
      lVar12 = (**(code **)(*plVar8 + 0x168))(plVar8,*(undefined8 *)(*plVar8 + 0x170));
      return lVar12;
    }
    goto LAB_042e07b0;
  }
  iVar11 = 0;
LAB_042e0470:
  uVar1 = System_String__get_Chars(param_1,iVar11,0);
  if (*(int *)(DAT_09181520 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09181520);
  }
  if (**(long **)(DAT_09181520 + 0xb8) == 0) goto LAB_042e07b0;
  uVar7 = FUN_06e77c44(**(long **)(DAT_09181520 + 0xb8),uVar1,DAT_0919c658);
  if ((uVar7 & 1) == 0) {
LAB_042e06b4:
    if (plVar8 == (long *)0x0) goto LAB_042e07b0;
    System_Text_StringBuilder__Append(plVar8,uVar1,0);
    iVar3 = iVar11;
LAB_042e06c8:
    iVar11 = iVar3 + 1;
    if (*(int *)(param_1 + 0x10) <= iVar11) goto LAB_042e0774;
    goto LAB_042e0470;
  }
  if (*(int *)(DAT_09181520 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  iVar2 = CakeOrder_Localization_ArabicShaper__Neighbour(param_1,iVar11,0xffffffff);
  iVar3 = CakeOrder_Localization_ArabicShaper__Neighbour(param_1,iVar11,1);
  if (iVar2 < 0) {
LAB_042e0548:
    uVar5 = 0;
  }
  else {
    uVar4 = System_String__get_Chars(param_1,iVar2,0);
    if (*(int *)(DAT_09181520 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09181520);
    }
    uVar7 = CakeOrder_Localization_ArabicShaper__JoinsNext(uVar4);
    if ((uVar7 & 1) == 0) goto LAB_042e0548;
    if (*(int *)(DAT_09181520 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar5 = CakeOrder_Localization_ArabicShaper__JoinsPrevious(uVar1);
  }
  if (((uVar1 & 0xffff) == 0x644) && (-1 < iVar3)) {
    if (*(int *)(DAT_09181520 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar12 = *(long *)(*(long *)(DAT_09181520 + 0xb8) + 8);
    uVar4 = System_String__get_Chars(param_1,iVar3,0);
    if (lVar12 == 0) goto LAB_042e07b0;
    uVar7 = FUN_06e795bc(lVar12,uVar4,&local_68,DAT_0919c660);
    if ((uVar7 & 1) == 0) goto LAB_042e05c8;
    if ((uVar5 & 1) == 0) {
      if (local_68 == 0) goto LAB_042e07b0;
      if (*(int *)(local_68 + 0x18) == 0) goto LAB_042e07b4;
      puVar9 = (undefined2 *)(local_68 + 0x20);
    }
    else {
      if (local_68 == 0) goto LAB_042e07b0;
      if ((*(uint *)(local_68 + 0x18) & 0xfffffffe) == 0) goto LAB_042e07b4;
      puVar9 = (undefined2 *)(local_68 + 0x22);
    }
    if (plVar8 == (long *)0x0) goto LAB_042e07b0;
    System_Text_StringBuilder__Append(plVar8,*puVar9,0);
    iVar11 = iVar11 + 1;
    if (iVar11 < iVar3) {
      do {
        uVar4 = System_String__get_Chars(param_1,iVar11,0);
        System_Text_StringBuilder__Append(plVar8,uVar4,0);
        iVar11 = iVar11 + 1;
      } while (iVar3 != iVar11);
    }
    goto LAB_042e06c8;
  }
  if (iVar3 < 0) {
LAB_042e061c:
    uVar6 = 0;
  }
  else {
LAB_042e05c8:
    uVar4 = System_String__get_Chars(param_1,iVar3,0);
    if (*(int *)(DAT_09181520 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09181520);
    }
    uVar7 = CakeOrder_Localization_ArabicShaper__JoinsPrevious(uVar4);
    if ((uVar7 & 1) == 0) goto LAB_042e061c;
    if (*(int *)(DAT_09181520 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar6 = CakeOrder_Localization_ArabicShaper__JoinsNext(uVar1);
  }
  if (*(int *)(DAT_09181520 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if (**(long **)(DAT_09181520 + 0xb8) == 0) goto LAB_042e07b0;
  lVar12 = FUN_06e779b0(**(long **)(DAT_09181520 + 0xb8),uVar1,DAT_0919c668);
  if ((uVar5 & uVar6 & 1) == 0) {
    if ((uVar5 & 1) != 0) {
      if (lVar12 == 0) goto LAB_042e07b0;
      if ((*(ulong *)(lVar12 + 0x18) & 0xfffffffe) == 0) goto LAB_042e07b4;
      uVar1 = (uint)*(ushort *)(lVar12 + 0x22);
      if (*(ushort *)(lVar12 + 0x22) != 0) goto LAB_042e06b4;
      uVar7 = *(ulong *)(lVar12 + 0x18) & 0xffffffff;
LAB_042e069c:
      iVar3 = (int)uVar7;
      if ((uVar7 & 0xfffffffe) == 0) goto LAB_042e07b4;
      uVar1 = (uint)*(ushort *)(lVar12 + 0x22);
      if (*(ushort *)(lVar12 + 0x22) != 0) goto LAB_042e06b4;
      goto LAB_042e06ac;
    }
    if ((uVar6 & 1) != 0) {
      if (lVar12 != 0) {
        if ((uint)*(ulong *)(lVar12 + 0x18) < 3) goto LAB_042e07b4;
        uVar7 = *(ulong *)(lVar12 + 0x18) & 0xffffffff;
        puVar10 = (ushort *)(lVar12 + 0x24);
        goto LAB_042e066c;
      }
      goto LAB_042e07b0;
    }
    if (lVar12 == 0) goto LAB_042e07b0;
    uVar7 = (ulong)*(uint *)(lVar12 + 0x18);
    if (uVar7 == 0) goto LAB_042e07b4;
    puVar10 = (ushort *)(lVar12 + 0x20);
  }
  else {
    if (lVar12 == 0) goto LAB_042e07b0;
    if ((*(ulong *)(lVar12 + 0x18) & 0xfffffffc) == 0) goto LAB_042e07b4;
    uVar7 = *(ulong *)(lVar12 + 0x18) & 0xffffffff;
    puVar10 = (ushort *)(lVar12 + 0x26);
  }
LAB_042e066c:
  iVar3 = (int)uVar7;
  uVar1 = (uint)*puVar10;
  if (*puVar10 != 0) goto LAB_042e06b4;
  if ((uVar5 & 1) != 0) goto LAB_042e069c;
LAB_042e06ac:
  if (iVar3 == 0) {
LAB_042e07b4:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c558();
  }
  uVar1 = (uint)*(ushort *)(lVar12 + 0x20);
  goto LAB_042e06b4;
}

