// rea decompile_all
// name: AnhPD.Home.HomeBuilding$$ApplyUpgradeState
// address: 0x41d053c
// body: available
// range: 0x41d053c-0x41d08c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41d0780 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41d08ac to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41d08b0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41d08b4 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41d08b8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41d08c0 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x041d08bc) */

void AnhPD_Home_HomeBuilding__ApplyUpgradeState(long param_1,undefined4 param_2,long *param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 uVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long lVar8;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  long *local_38;
  
  if ((DAT_09516a31 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a4580);
    FUN_03f5c2a4(&DAT_091a4588);
    FUN_03f5c2a4(&DAT_091a4590);
    FUN_03f5c2a4(&DAT_091a86b8);
    FUN_03f5c2a4(&DAT_091a86c0);
    FUN_03f5c2a4(&DAT_091a86d0);
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_0917a768);
    FUN_03f5c2a4(&DAT_0917ae48);
    FUN_03f5c2a4(&DAT_09185b10);
    DAT_09516a31 = 1;
  }
  local_40 = 0;
  local_38 = (long *)0x0;
  local_50 = 0;
  uStack_48 = 0;
  *(undefined4 *)(param_1 + 0x50) = param_2;
  if (*(long *)(param_1 + 200) == 0) goto LAB_041d08b0;
  FUN_053ebbdc(*(long *)(param_1 + 200),DAT_091a86c0);
  if (param_3 != (long *)0x0) {
    lVar5 = *param_3;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == DAT_0917a768) {
          puVar1 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_041d0660;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar1 = (undefined8 *)FUN_03f95da8(param_3,DAT_0917a768,0);
LAB_041d0660:
    plVar2 = (long *)(*(code *)*puVar1)(param_3,puVar1[1]);
    do {
      local_38 = plVar2;
      if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar5 = *plVar2;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == DAT_09185b10) {
            puVar1 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_041d06e4;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar1 = (undefined8 *)FUN_03f95da8(plVar2,DAT_09185b10,0);
LAB_041d06e4:
      uVar6 = (*(code *)*puVar1)(plVar2,puVar1[1]);
      plVar2 = local_38;
      if ((uVar6 & 1) == 0) {
        if (local_38 == (long *)0x0) break;
        lVar5 = *local_38;
        uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar6 == 0) goto LAB_041d07cc;
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        goto LAB_041d07b4;
      }
      if (local_38 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar5 = *local_38;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == DAT_0917ae48) {
            puVar1 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_041d0748;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar1 = (undefined8 *)FUN_03f95da8(local_38,DAT_0917ae48,0);
LAB_041d0748:
      uVar3 = (*(code *)*puVar1)(plVar2,puVar1[1]);
      uVar6 = System_String__IsNullOrEmpty(uVar3,0);
      plVar2 = local_38;
      if ((uVar6 & 1) == 0) {
        if (*(long *)(param_1 + 200) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        FUN_053ec72c(*(long *)(param_1 + 200),uVar3,DAT_091a86b8);
        plVar2 = local_38;
      }
    } while( true );
  }
  goto LAB_041d07f8;
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar7 = piVar7 + 4;
    if (uVar6 == 0) break;
LAB_041d07b4:
    if (*(long *)(piVar7 + -2) == DAT_09185a58) {
      puVar1 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_041d07e8;
    }
  }
LAB_041d07cc:
  puVar1 = (undefined8 *)FUN_03f95da8(local_38,DAT_09185a58,0);
LAB_041d07e8:
  (*(code *)*puVar1)(plVar2,puVar1[1]);
LAB_041d07f8:
  lVar5 = *(long *)(param_1 + 0x78);
  if (lVar5 != 0) {
    uVar4 = *(uint *)(lVar5 + 0x18);
    if (0 < (int)uVar4) {
      lVar8 = 0;
      do {
        if (uVar4 <= (uint)lVar8) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        if (*(long *)(lVar5 + 0x20 + lVar8 * 8) == 0) goto LAB_041d08b0;
        AnhPD_Home_HomeBuildingSection__ActivateHidden();
        uVar4 = *(uint *)(lVar5 + 0x18);
        lVar8 = lVar8 + 1;
      } while ((int)lVar8 < (int)uVar4);
    }
    if (*(long *)(param_1 + 200) == 0) {
LAB_041d08b0:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    FUN_053ec0b0(&local_50,*(long *)(param_1 + 200),DAT_091a86d0);
    while (uVar6 = FUN_071bb7b4(&local_50,DAT_091a4588), (uVar6 & 1) != 0) {
      AnhPD_Home_HomeBuilding__ShowPartById(param_1,local_40);
    }
    FUN_071bb7b0(&local_50,DAT_091a4580);
  }
  return;
}

