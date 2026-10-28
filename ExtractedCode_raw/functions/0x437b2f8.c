// rea decompile_all
// name: CakeOrder.InGame.UIInGameNumberCounter$$AddHoldingSourcess
// address: 0x437b2f8
// body: available
// range: 0x437b2f8-0x437b727 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x437b710 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x437b714 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x437b718 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x437b71c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x437b724 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0437b6a8) */
/* WARNING: Removing unreachable block (ram,0x0437b720) */

void CakeOrder_InGame_UIInGameNumberCounter__AddHoldingSourcess(long *param_1,long *param_2)

{
  uint uVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  ulong uVar12;
  int *piVar13;
  
  if ((DAT_0951793f & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180e78);
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_0917a530);
    FUN_03f5c2a4(&DAT_0917abe0);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_09185e58);
    FUN_03f5c2a4(&DAT_091ad3f0);
    FUN_03f5c2a4(&DAT_091ad3f8);
    FUN_03f5c2a4(&DAT_091dcbd0);
    DAT_0951793f = 1;
  }
  if (param_2 == (long *)0x0) {
    return;
  }
  lVar9 = *param_2;
  uVar12 = (ulong)*(ushort *)(lVar9 + 0x12e);
  if (uVar12 != 0) {
    piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar13 + -2) == DAT_0917a530) {
        puVar4 = (undefined8 *)(lVar9 + (long)*piVar13 * 0x10 + 0x138);
        goto LAB_0437b3f8;
      }
      uVar12 = uVar12 - 1;
      piVar13 = piVar13 + 4;
    } while (uVar12 != 0);
  }
  puVar4 = (undefined8 *)FUN_03f95da8(param_2,DAT_0917a530,0);
LAB_0437b3f8:
  plVar5 = (long *)(*(code *)*puVar4)(param_2,puVar4[1]);
  bVar2 = false;
joined_r0x0437b44c:
  do {
    do {
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar9 = *plVar5;
      uVar12 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == DAT_09185b10) {
            puVar4 = (undefined8 *)(lVar9 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_0437b49c;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar4 = (undefined8 *)FUN_03f95da8(plVar5,DAT_09185b10,0);
LAB_0437b49c:
      uVar12 = (*(code *)*puVar4)(plVar5,puVar4[1]);
      if ((uVar12 & 1) == 0) {
        if (plVar5 == (long *)0x0) goto LAB_0437b69c;
        lVar9 = *plVar5;
        uVar12 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar12 == 0) goto LAB_0437b674;
        piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        goto LAB_0437b65c;
      }
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar9 = *plVar5;
      uVar12 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == DAT_0917abe0) {
            puVar4 = (undefined8 *)(lVar9 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_0437b500;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar4 = (undefined8 *)FUN_03f95da8(plVar5,DAT_0917abe0,0);
LAB_0437b500:
      plVar6 = (long *)(*(code *)*puVar4)(plVar5,puVar4[1]);
    } while (plVar6 == (long *)0x0);
    if (param_1[0xd] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar12 = FUN_057e1004(param_1[0xd],plVar6,DAT_091ad3f8);
    lVar9 = DAT_091ad3f0;
  } while ((uVar12 & 1) == 0);
  lVar7 = param_1[0xd];
  if (lVar7 != 0) {
    lVar10 = *(long *)(lVar7 + 0x10);
    *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
    if (lVar10 != 0) {
      uVar1 = *(uint *)(lVar7 + 0x18);
      if (uVar1 < *(uint *)(lVar10 + 0x18)) {
        *(uint *)(lVar7 + 0x18) = uVar1 + 1;
        plVar11 = (long *)(lVar10 + (long)(int)uVar1 * 8 + 0x20);
        *plVar11 = (long)plVar6;
        thunk_FUN_03f5d7b8(plVar11,plVar6);
      }
      else {
        FUN_057e0c68(lVar7,plVar6,*(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70))
        ;
      }
      uVar8 = thunk_FUN_03f9944c(DAT_09180e78);
      System_Action___ctor(uVar8,param_1,DAT_091dcbd0,0);
      lVar9 = *plVar6;
      uVar12 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == DAT_09185e58) {
            puVar4 = (undefined8 *)(lVar9 + (long)(*piVar13 + 2) * 0x10 + 0x138);
            goto LAB_0437b610;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar4 = (undefined8 *)FUN_03f95da8(plVar6,DAT_09185e58,2);
LAB_0437b610:
      bVar2 = true;
      (*(code *)*puVar4)(plVar6,uVar8,puVar4[1]);
      goto joined_r0x0437b44c;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
  while( true ) {
    uVar12 = uVar12 - 1;
    piVar13 = piVar13 + 4;
    if (uVar12 == 0) break;
LAB_0437b65c:
    if (*(long *)(piVar13 + -2) == DAT_09185a58) {
      puVar4 = (undefined8 *)(lVar9 + (long)*piVar13 * 0x10 + 0x138);
      goto LAB_0437b690;
    }
  }
LAB_0437b674:
  puVar4 = (undefined8 *)FUN_03f95da8(plVar5,DAT_09185a58,0);
LAB_0437b690:
  (*(code *)*puVar4)(plVar5,puVar4[1]);
LAB_0437b69c:
  if ((bVar2) && ((char)param_1[5] != '\0')) {
    (**(code **)(*param_1 + 0x1f8))(param_1,*(undefined8 *)(*param_1 + 0x200));
    uVar3 = (**(code **)(*param_1 + 0x198))(param_1,*(undefined8 *)(*param_1 + 0x1a0));
    (**(code **)(*param_1 + 0x188))(param_1,uVar3,0,*(undefined8 *)(*param_1 + 400));
  }
  return;
}

