// rea decompile_all
// name: AnhPD.FoodOrder.DragItemStackable$$Absorb
// address: 0x4113df4
// body: available
// range: 0x4113df4-0x4113fdb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4113fd8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_DragItemStackable__Absorb(long *param_1,long *param_2,ulong param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  long lVar6;
  
  if ((DAT_0951621c & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b48d0);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_0951621c = 1;
  }
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar4 = UnityEngine_Object__op_Equality(param_2,0,0);
  if ((uVar4 & 1) != 0) {
    return;
  }
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar4 = UnityEngine_Object__op_Equality(param_2,param_1,0);
  if ((uVar4 & 1) != 0) {
    return;
  }
  lVar6 = param_1[6];
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar4 = UnityEngine_Object__op_Implicit(lVar6,0);
  if ((uVar4 & 1) == 0) {
    AnhPD_FoodOrder_GlobalAudio__Play(0x3f800000,0,0);
  }
  else {
    lVar6 = *(long *)(DAT_091b48d0 + 0x20);
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_03f95a6c();
    }
    lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x10);
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_03f95a6c();
    }
    if (**(long **)(lVar6 + 0xb8) == 0) goto LAB_04113fd8;
    CakeOrder_AudioManagerCakeOrder__PlaySfx(0x3f800000,**(long **)(lVar6 + 0xb8),param_1[6],2,0);
  }
  if ((param_3 & 1) == 0) {
    if (param_2 == (long *)0x0) {
LAB_04113fd8:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    iVar1 = (**(code **)(*param_2 + 0x218))(param_2,*(undefined8 *)(*param_2 + 0x220));
    uVar5 = iVar1 + 1;
  }
  else {
    if (param_2 == (long *)0x0) goto LAB_04113fd8;
    iVar2 = (**(code **)(*param_2 + 0x218))(param_2,*(undefined8 *)(*param_2 + 0x220));
    iVar1 = *(int *)((long)param_1 + 0x94);
    uVar3 = (**(code **)(*param_1 + 0x218))(param_1,*(undefined8 *)(*param_1 + 0x220));
    uVar3 = iVar1 + ~uVar3;
    uVar3 = uVar3 & ((int)uVar3 >> 0x1f ^ 0xffffffffU);
    if (iVar2 + 1 < (int)uVar3) {
      uVar3 = iVar2 + 1;
    }
    uVar5 = 0;
    if (-1 < iVar2 + 1) {
      uVar5 = uVar3;
    }
  }
  (**(code **)(*param_2 + 0x208))(param_2,*(undefined8 *)(*param_2 + 0x210));
  if (0 < (int)uVar5) {
    do {
      (**(code **)(*param_1 + 0x238))(param_1,*(undefined8 *)(*param_1 + 0x240));
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  return;
}

