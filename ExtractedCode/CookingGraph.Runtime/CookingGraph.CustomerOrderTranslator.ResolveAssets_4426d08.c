// rea decompile_all
// name: CookingGraph.CustomerOrderTranslator$$ResolveAssets
// address: 0x4426d08
// body: available
// range: 0x4426d08-0x4426fff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4426ed8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4426ffc to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CookingGraph_CustomerOrderTranslator__ResolveAssets
               (long param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 local_60;
  undefined8 *puStack_58;
  undefined4 local_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  if ((DAT_09517f5a & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c6fc0);
    FUN_03f5c2a4(&DAT_091c6fc8);
    FUN_03f5c2a4(&DAT_091c6fd0);
    FUN_03f5c2a4(&DAT_091a3b30);
    FUN_03f5c2a4(&DAT_091a3b38);
    FUN_03f5c2a4(&DAT_091a3b40);
    FUN_03f5c2a4(&DAT_091aecc0);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09517f5a = 1;
  }
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  if (param_1 == 0) {
    return;
  }
  uVar2 = *(undefined4 *)(param_1 + 0x14);
  iVar1 = *(int *)(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x18) = uVar2;
  if (iVar1 == 2) {
    if ((param_2 == 0) || (*(long *)(param_2 + 0x30) == 0)) goto LAB_04426ed8;
    puVar8 = &DAT_091c6fc8;
    uVar3 = *(undefined8 *)(*(long *)(param_2 + 0x30) + 0x20);
LAB_04426e18:
    uVar3 = FUN_04a7bd30(uVar3,uVar2,*puVar8);
    *(undefined8 *)(param_1 + 0x20) = uVar3;
    thunk_FUN_03f5d7b8();
  }
  else {
    if (iVar1 == 1) {
      if ((param_2 == 0) || (*(long *)(param_2 + 0x30) == 0)) goto LAB_04426ed8;
      puVar8 = &DAT_091c6fc0;
      uVar3 = *(undefined8 *)(*(long *)(param_2 + 0x30) + 0x18);
      goto LAB_04426e18;
    }
    if (iVar1 == 0) {
      if ((param_2 == 0) || (*(long *)(param_2 + 0x30) == 0)) goto LAB_04426ed8;
      puVar8 = &DAT_091c6fd0;
      uVar3 = *(undefined8 *)(*(long *)(param_2 + 0x30) + 0x10);
      goto LAB_04426e18;
    }
  }
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar4 = UnityEngine_Object__op_Equality(uVar3,0,0);
  if ((uVar4 & 1) != 0) {
    FUN_039b1d98(param_1);
    thunk_FUN_03fc39d4(&DAT_09182ff8);
    FUN_039afb80();
    uVar3 = System_Globalization_CultureInfo__get_InvariantCulture(0);
    uVar3 = System_Int32__ToString((undefined4 *)(param_1 + 0x14),uVar3,0);
    FUN_039b1d98(param_1);
    local_60 = CONCAT44(local_60._4_4_,*(undefined4 *)(param_1 + 0x10));
    uVar5 = thunk_FUN_03fc39d4(&DAT_09188ce0);
    uVar5 = FUN_03f5c42c(uVar5,&local_60);
    FUN_039b1d98(param_1);
    local_4c = *(undefined4 *)(param_1 + 0x18);
    uVar6 = FUN_03f5c42c(DAT_09535420,&local_4c);
    uVar7 = thunk_FUN_03fc39d4(&DAT_09226290);
    uVar5 = System_String__Format(uVar7,uVar5,uVar6,0);
    FUN_039b1d98(param_3);
    uVar2 = System_String__IndexOf(param_3,uVar3,4,0);
    thunk_FUN_03fc39d4(&DAT_09187e80);
    FUN_039afb80();
    uVar2 = System_Math__Max(0,uVar2,0);
    thunk_FUN_03fc39d4(&DAT_09182d98);
    uVar3 = thunk_FUN_03f9944c();
    CookingGraph_CookingGraphFormatException___ctor(uVar3,uVar5,uVar2,param_3);
    uVar5 = thunk_FUN_03fc39d4(&DAT_091c6ff8);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar3,uVar5);
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    FUN_057e185c(&local_48,*(long *)(param_1 + 0x28),DAT_091aecc0);
    local_60 = 0;
    puStack_58 = &local_48;
    while (uVar4 = FUN_071bd28c(&local_48,DAT_091a3b38), (uVar4 & 1) != 0) {
      CookingGraph_CustomerOrderTranslator__ResolveAssets(local_38,param_2,param_3);
    }
    FUN_071bd288(&local_48,DAT_091a3b30);
    return;
  }
LAB_04426ed8:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

