// rea decompile_all
// name: AnhPD.FoodOrder.OrderSpecExtensions$$ToDisplayIds
// address: 0x41d8250
// body: available
// range: 0x41d8250-0x41d84ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41d84a8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long AnhPD_FoodOrder_OrderSpecExtensions__ToDisplayIds(long *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  int iVar10;
  undefined8 local_88 [9];
  
  if ((DAT_09516a90 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917b388);
    FUN_03f5c2a4(&DAT_0917b528);
    FUN_03f5c2a4(&DAT_091b0570);
    FUN_03f5c2a4(&DAT_091b0568);
    FUN_03f5c2a4(&DAT_0917cce8);
    DAT_09516a90 = 1;
  }
  if (param_1 == (long *)0x0) {
    uVar2 = 0;
  }
  else {
    lVar5 = *param_1;
    uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == DAT_0917b388) {
          puVar4 = (undefined8 *)(lVar5 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_041d8328;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_03f95da8(param_1,DAT_0917b388,0);
LAB_041d8328:
    uVar2 = (*(code *)*puVar4)(param_1,puVar4[1]);
  }
  lVar5 = thunk_FUN_03f9944c(DAT_0917cce8);
  FUN_057e0478(lVar5,uVar2,DAT_091b0568);
  if (param_1 == (long *)0x0) {
    return lVar5;
  }
  iVar10 = 0;
  do {
    lVar6 = *param_1;
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == DAT_0917b388) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_041d83b4;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_03f95da8(param_1,DAT_0917b388,0);
LAB_041d83b4:
    iVar3 = (*(code *)*puVar4)(param_1,puVar4[1]);
    if (iVar3 <= iVar10) {
      return lVar5;
    }
    lVar6 = *param_1;
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == DAT_0917b528) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_041d8414;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_03f95da8(param_1,DAT_0917b528,0);
LAB_041d8414:
    (*(code *)*puVar4)(local_88,param_1,iVar10,puVar4[1]);
    lVar6 = DAT_091b0570;
    if (lVar5 == 0) {
LAB_041d84a8:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar7 = *(long *)(lVar5 + 0x10);
    *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
    if (lVar7 == 0) goto LAB_041d84a8;
    uVar1 = *(uint *)(lVar5 + 0x18);
    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
      *(uint *)(lVar5 + 0x18) = uVar1 + 1;
      *(undefined8 *)(lVar7 + (long)(int)uVar1 * 8 + 0x20) = local_88[0];
      thunk_FUN_03f5d7b8();
    }
    else {
      FUN_057e0c68(lVar5,local_88[0],
                   *(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
    }
    iVar10 = iVar10 + 1;
  } while( true );
}

