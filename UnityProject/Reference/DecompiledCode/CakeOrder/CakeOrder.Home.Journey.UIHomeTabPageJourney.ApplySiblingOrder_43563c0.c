// rea decompile_all
// name: CakeOrder.Home.Journey.UIHomeTabPageJourney$$ApplySiblingOrder
// address: 0x43563c0
// body: available
// range: 0x43563c0-0x43564b7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43564a4 to 0x8670158 UnityEngine.Transform$$SetAsLastSibling (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x43564b4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_Home_Journey_UIHomeTabPageJourney__ApplySiblingOrder(long param_1)

{
  long lVar1;
  ulong uVar2;
  int iVar3;
  undefined8 uVar4;
  
  if ((DAT_095177df & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b1508);
    FUN_03f5c2a4(&DAT_091b1510);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_095177df = 1;
  }
  if (*(long *)(param_1 + 0x120) != 0) {
    iVar3 = *(int *)(*(long *)(param_1 + 0x120) + 0x18);
    if (-1 < iVar3 + -1) {
      do {
        if (*(long *)(param_1 + 0x120) == 0) goto LAB_043564b4;
        iVar3 = iVar3 + -1;
        lVar1 = FUN_057e0998(*(long *)(param_1 + 0x120),iVar3,DAT_091b1510);
        if ((lVar1 == 0) || (lVar1 = UnityEngine_Component__get_transform(lVar1,0), lVar1 == 0))
        goto LAB_043564b4;
        UnityEngine_Transform__SetAsLastSibling(lVar1,0);
      } while (0 < iVar3);
    }
    uVar4 = *(undefined8 *)(param_1 + 0xd0);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar2 = UnityEngine_Object__op_Implicit(uVar4,0);
    if ((uVar2 & 1) == 0) {
      return;
    }
    if ((*(long *)(param_1 + 0xd0) != 0) &&
       (lVar1 = UnityEngine_Component__get_transform(*(long *)(param_1 + 0xd0),0), lVar1 != 0)) {
      UnityEngine_Transform__SetAsLastSibling(lVar1,0);
      return;
    }
  }
LAB_043564b4:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

