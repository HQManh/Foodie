// rea decompile_all
// name: CookOrder.Cooking.Implement.CookingGameplayPresentation$$PlayTap
// address: 0x44b1f78
// body: available
// range: 0x44b1f78-0x44b2113 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x44b20fc to 0x4252cd0 CakeOrder.AudioManagerCakeOrder$$PlaySfx (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x44b2110 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CookOrder_Cooking_Implement_CookingGameplayPresentation__PlayTap(long param_1,ulong param_2)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  undefined8 uVar5;
  long *plVar6;
  
  if ((DAT_0951822b & 1) == 0) {
    FUN_03f5c2a4(&DAT_091858e8);
    FUN_03f5c2a4(&DAT_091b48d0);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_0951822b = 1;
  }
  if (DAT_09518261 == '\0') {
    FUN_03f5c2a4(&DAT_09182d78);
    DAT_09518261 = '\x01';
  }
  plVar6 = (long *)**(undefined8 **)(DAT_09182d78 + 0xb8);
  if (plVar6 != (long *)0x0) {
    lVar2 = *plVar6;
    uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == DAT_091858e8) {
          puVar1 = (undefined8 *)(lVar2 + (long)(*piVar4 + 3) * 0x10 + 0x138);
          goto LAB_044b205c;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar3 != 0);
    }
    puVar1 = (undefined8 *)FUN_03f95da8(plVar6,DAT_091858e8,3);
LAB_044b205c:
    (*(code *)*puVar1)(plVar6,puVar1[1]);
  }
  lVar2 = 0x178;
  if ((param_2 & 1) == 0) {
    lVar2 = 0x180;
  }
  uVar5 = *(undefined8 *)(param_1 + lVar2);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar3 = UnityEngine_Object__op_Implicit(uVar5,0);
  if ((uVar3 & 1) == 0) {
    return;
  }
  lVar2 = *(long *)(DAT_091b48d0 + 0x20);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_03f95a6c();
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_03f95a6c();
  }
  if (**(long **)(lVar2 + 0xb8) != 0) {
    CakeOrder_AudioManagerCakeOrder__PlaySfx(0x3f800000,**(long **)(lVar2 + 0xb8),uVar5,4,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

