// rea decompile_all
// name: Datpt.Cook_Order.OrderCircleCountDownTimer$$TimeOut
// address: 0x41b3660
// body: available
// range: 0x41b3660-0x41b3767 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41b3754 to 0x4d956bc FUN_04d956bc (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Datpt_Cook_Order_OrderCircleCountDownTimer__TimeOut(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  if ((DAT_0951691d & 1) == 0) {
    FUN_03f5c2a4(&DAT_091d5630);
    FUN_03f5c2a4(&DAT_0918c148);
    FUN_03f5c2a4(&DAT_091dbd10);
    FUN_03f5c2a4(&DAT_091dbeb0);
    DAT_0951691d = 1;
  }
  if (*(char *)(param_1 + 0x48) != '\0') {
    lVar3 = *(long *)(param_1 + 0x38);
    if (lVar3 != 0) {
      (**(code **)(lVar3 + 0x18))(*(undefined8 *)(lVar3 + 0x40),*(undefined8 *)(lVar3 + 0x28));
    }
    uVar1 = DG_Tweening_ShortcutExtensions__DOScale
                      (0x3f800000,0x3e99999a,*(undefined8 *)(param_1 + 0x28),0);
    uVar1 = FUN_04d95e8c(uVar1,0x1c,DAT_091dbeb0);
    uVar2 = thunk_FUN_03f9944c(DAT_0918c148);
    DG_Tweening_TweenCallback___ctor(uVar2,param_1,DAT_091d5630,0);
    FUN_04d956bc(uVar1,uVar2,DAT_091dbd10);
    return;
  }
  return;
}

