// rea decompile_all
// name: AnhPD.FoodOrder.HomeCustomerParade.<LoadPrefab>d__104$$MoveNext
// address: 0x40b1d3c
// body: available
// range: 0x40b1d3c-0x40b211b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40b2118 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 AnhPD_FoodOrder_HomeCustomerParade_<LoadPrefab>d__104__MoveNext(long param_1)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  code *pcVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 local_28;
  
  if ((DAT_09515eec & 1) == 0) {
    FUN_03f5c2a4(&DAT_091bf638);
    FUN_03f5c2a4(&DAT_09180f88);
    FUN_03f5c2a4(&DAT_09197800);
    FUN_03f5c2a4(&DAT_09197808);
    FUN_03f5c2a4(&DAT_09175068);
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_0919f790);
    FUN_03f5c2a4(&DAT_0919f798);
    FUN_03f5c2a4(&DAT_091aa4e8);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09213d58);
    FUN_03f5c2a4(&DAT_091f7a80);
    DAT_09515eec = 1;
  }
  lVar9 = *(long *)(param_1 + 0x20);
  local_28 = 0;
  if (*(int *)(param_1 + 0x10) == 1) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    iVar3 = FUN_0640f818(param_1 + 0x40,DAT_09197808);
    if (iVar3 == 1) {
      uVar6 = FUN_0640f7ac(param_1 + 0x40,DAT_09197800);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09188ad0);
      }
      uVar4 = UnityEngine_Object__op_Implicit(uVar6,0);
      if ((uVar4 & 1) != 0) {
        if (lVar9 != 0) {
          lVar9 = *(long *)(lVar9 + 0x110);
          uVar5 = *(undefined8 *)(param_1 + 0x28);
          uVar6 = FUN_0640f7ac(param_1 + 0x40,DAT_09197800);
          if (lVar9 != 0) {
            FUN_06fd8440(lVar9,uVar5,uVar6,DAT_0919f798);
            lVar9 = *(long *)(param_1 + 0x30);
            uVar6 = FUN_0640f7ac(param_1 + 0x40,DAT_09197800);
            if (lVar9 != 0) {
              (**(code **)(lVar9 + 0x18))
                        (*(undefined8 *)(lVar9 + 0x40),uVar6,*(undefined8 *)(lVar9 + 0x28));
              return 0;
            }
          }
        }
        goto LAB_040b2118;
      }
    }
    if ((lVar9 != 0) && (*(long *)(lVar9 + 0x110) != 0)) {
      FUN_06fd8440(*(long *)(lVar9 + 0x110),*(undefined8 *)(param_1 + 0x28),0,DAT_0919f798);
      uVar6 = System_String__Concat(DAT_09213d58,*(undefined8 *)(param_1 + 0x38),DAT_091f7a80,0);
      if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
        FUN_03f5c424(DAT_091835d0);
      }
      UnityEngine_Debug__LogError(uVar6,lVar9,0);
      lVar9 = *(long *)(param_1 + 0x30);
      if (lVar9 != 0) {
        pcVar8 = *(code **)(lVar9 + 0x18);
        uVar5 = *(undefined8 *)(lVar9 + 0x40);
        uVar6 = 0;
LAB_040b1fac:
        (*pcVar8)(uVar5,uVar6,*(undefined8 *)(lVar9 + 0x28));
        return 0;
      }
    }
  }
  else {
    if (*(int *)(param_1 + 0x10) != 0) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if ((lVar9 != 0) && (*(long *)(lVar9 + 0x110) != 0)) {
      uVar4 = FUN_06fd9fbc(*(long *)(lVar9 + 0x110),*(undefined8 *)(param_1 + 0x28),&local_28,
                           DAT_0919f790);
      if ((uVar4 & 1) == 0) {
        uVar6 = AnhPD_FoodOrder_HomeCustomerParade__AddressOf(*(undefined8 *)(param_1 + 0x28),0);
        puVar10 = (undefined8 *)(param_1 + 0x38);
        *puVar10 = uVar6;
        thunk_FUN_03f5d7b8(puVar10,uVar6);
        uVar6 = *puVar10;
        if (*(int *)(DAT_09180f88 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        FUN_04b711d8(&local_88,uVar6,DAT_091bf638);
        *(undefined8 *)(param_1 + 0x48) = uStack_80;
        *(undefined8 *)(param_1 + 0x40) = local_88;
        *(undefined8 *)(param_1 + 0x50) = local_78;
        thunk_FUN_03f5d7b8(param_1 + 0x40,0);
        lVar2 = DAT_091aa4e8;
        lVar9 = *(long *)(lVar9 + 0x118);
        if (lVar9 != 0) {
          uStack_68 = *(undefined8 *)(param_1 + 0x48);
          local_70 = *(undefined8 *)(param_1 + 0x40);
          local_60 = *(undefined8 *)(param_1 + 0x50);
          lVar7 = *(long *)(lVar9 + 0x10);
          *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
          if (lVar7 != 0) {
            uVar1 = *(uint *)(lVar9 + 0x18);
            if (uVar1 < *(uint *)(lVar7 + 0x18)) {
              lVar7 = lVar7 + (long)(int)uVar1 * 0x18;
              *(uint *)(lVar9 + 0x18) = uVar1 + 1;
              *(undefined8 *)(lVar7 + 0x28) = uStack_68;
              *(undefined8 *)(lVar7 + 0x20) = local_70;
              *(undefined8 *)(lVar7 + 0x30) = local_60;
              thunk_FUN_03f5d7b8(lVar7 + 0x20,0);
            }
            else {
              local_50 = local_70;
              uStack_48 = uStack_68;
              local_40 = local_60;
              FUN_0564eb10(lVar9,&local_50,
                           *(undefined8 *)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
            }
            uStack_48 = *(undefined8 *)(param_1 + 0x48);
            local_50 = *(undefined8 *)(param_1 + 0x40);
            local_40 = *(undefined8 *)(param_1 + 0x50);
            uVar6 = FUN_03f5c42c(DAT_09175068,&local_50);
            *(undefined8 *)(param_1 + 0x18) = uVar6;
            thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x18),uVar6);
            *(undefined4 *)(param_1 + 0x10) = 1;
            return 1;
          }
        }
      }
      else {
        lVar9 = *(long *)(param_1 + 0x30);
        if (lVar9 != 0) {
          pcVar8 = *(code **)(lVar9 + 0x18);
          uVar5 = *(undefined8 *)(lVar9 + 0x40);
          uVar6 = local_28;
          goto LAB_040b1fac;
        }
      }
    }
  }
LAB_040b2118:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

