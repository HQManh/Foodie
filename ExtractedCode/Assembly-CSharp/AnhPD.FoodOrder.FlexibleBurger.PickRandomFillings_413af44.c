// rea decompile_all
// name: AnhPD.FoodOrder.FlexibleBurger$$PickRandomFillings
// address: 0x413af44
// body: available
// range: 0x413af44-0x413b25b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x413b258 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long AnhPD_FoodOrder_FlexibleBurger__PickRandomFillings(long param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  int local_64;
  
  if ((DAT_09516395 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a1738);
    FUN_03f5c2a4(&DAT_091a1728);
    FUN_03f5c2a4(&DAT_091a1740);
    FUN_03f5c2a4(&DAT_09177168);
    FUN_03f5c2a4(&DAT_091ccc70);
    FUN_03f5c2a4(&DAT_091b2ab0);
    FUN_03f5c2a4(&DAT_091b2ad8);
    FUN_03f5c2a4(&DAT_091b2ad0);
    FUN_03f5c2a4(&DAT_091b2aa0);
    FUN_03f5c2a4(&DAT_091b2aa8);
    FUN_03f5c2a4(&DAT_091b2ae8);
    FUN_03f5c2a4(&DAT_091b2af0);
    FUN_03f5c2a4(&DAT_0917d380);
    DAT_09516395 = 1;
  }
  local_64 = 0;
  lVar8 = thunk_FUN_03f9944c(DAT_0917d380);
  FUN_0579924c(lVar8,DAT_091b2aa0);
  lVar12 = *(long *)(param_1 + 0x118);
  if (lVar12 != 0) {
    if (*(int *)(lVar12 + 0x18) < 1) {
      uVar9 = FUN_04b4db34(param_1,DAT_091ccc70);
      *(undefined8 *)(param_1 + 0x118) = uVar9;
      thunk_FUN_03f5d7b8(param_1 + 0x118,uVar9);
      lVar12 = *(long *)(param_1 + 0x118);
    }
    lVar10 = thunk_FUN_03f9944c(DAT_0917d380);
    FUN_05799388(lVar10,lVar12,DAT_091b2aa8);
    if (lVar10 != 0) {
      FUN_0579b0b8(lVar10,0,DAT_091b2ad0);
      if (*(int *)(lVar10 + 0x18) != 0) {
        iVar1 = *(int *)(param_1 + 0x108);
        if (iVar1 < 2) {
          iVar1 = 1;
        }
        iVar3 = iVar1 * *(int *)(lVar10 + 0x18);
        iVar5 = iVar3;
        if (param_2 <= iVar3) {
          iVar5 = param_2;
        }
        if (0 < param_2) {
          iVar3 = iVar5;
        }
        if (iVar3 < 2) {
          iVar3 = 1;
        }
        iVar5 = UnityEngine_Random__Range(1,iVar3 + 1,0);
        lVar12 = thunk_FUN_03f9944c(DAT_09177168);
        FUN_06f2c578(lVar12,DAT_091a1728);
        if (0 < iVar5) {
          do {
            if (*(int *)(lVar10 + 0x18) < 1) {
              return lVar8;
            }
            uVar6 = UnityEngine_Random__Range(0,*(int *)(lVar10 + 0x18),0);
            uVar7 = FUN_057997e4(lVar10,uVar6,DAT_091b2af0);
            lVar4 = DAT_091b2ab0;
            if (lVar8 == 0) goto LAB_0413b258;
            lVar11 = *(long *)(lVar8 + 0x10);
            *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
            if (lVar11 == 0) goto LAB_0413b258;
            uVar2 = *(uint *)(lVar8 + 0x18);
            if (uVar2 < *(uint *)(lVar11 + 0x18)) {
              *(uint *)(lVar8 + 0x18) = uVar2 + 1;
              *(undefined4 *)(lVar11 + (long)(int)uVar2 * 4 + 0x20) = uVar7;
            }
            else {
              FUN_05799adc(lVar8,uVar7,
                           *(undefined8 *)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
            }
            if (lVar12 == 0) goto LAB_0413b258;
            FUN_06f2ec88(lVar12,uVar7,&local_64,DAT_091a1738);
            FUN_06f2d308(lVar12,uVar7,local_64 + 1,DAT_091a1740);
            if (iVar1 <= local_64 + 1) {
              FUN_0579b33c(lVar10,uVar6,DAT_091b2ad8);
            }
            iVar5 = iVar5 + -1;
          } while (iVar5 != 0);
        }
      }
      return lVar8;
    }
  }
LAB_0413b258:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

