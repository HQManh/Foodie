// rea decompile_all
// name: AnhPD.FoodOrder.KeyManager$$Awake
// address: 0x40b395c
// body: available
// range: 0x40b395c-0x40b3b43 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40b3a78 to 0x8662bb0 UnityEngine.Object$$Destroy (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_KeyManager__Awake(long param_1)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  
  if ((DAT_09515ef9 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091874f0);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09515ef9 = 1;
  }
  if (DAT_09515fa8 == '\0') {
    FUN_03f5c2a4(&DAT_091874f0);
    DAT_09515fa8 = '\x01';
  }
  uVar4 = **(undefined8 **)(DAT_091874f0 + 0xb8);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = UnityEngine_Object__op_Implicit(uVar4,0);
  if ((uVar1 & 1) != 0) {
    if (DAT_09515fa8 == '\0') {
      FUN_03f5c2a4(&DAT_091874f0);
      DAT_09515fa8 = '\x01';
    }
    uVar4 = **(undefined8 **)(DAT_091874f0 + 0xb8);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar1 = UnityEngine_Object__op_Inequality(uVar4,param_1,0);
    if ((uVar1 & 1) != 0) {
      uVar4 = UnityEngine_Component__get_gameObject(param_1,0);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09188ad0);
      }
      UnityEngine_Object__Destroy(uVar4,0);
      return;
    }
  }
  if (DAT_09515fa9 == '\0') {
    FUN_03f5c2a4(&DAT_091874f0);
    DAT_09515fa9 = '\x01';
  }
  **(long **)(DAT_091874f0 + 0xb8) = param_1;
  thunk_FUN_03f5d7b8(*(undefined8 *)(DAT_091874f0 + 0xb8),param_1);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = UnityEngine_Object__op_Implicit(uVar4,0);
  if ((uVar1 & 1) == 0) {
    uVar4 = UnityEngine_Component__get_transform(param_1,0);
    *(undefined8 *)(param_1 + 0x30) = uVar4;
    thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x30),uVar4);
  }
  plVar2 = (long *)(*(long *)(DAT_091874f0 + 0xb8) + 8);
  lVar3 = *plVar2;
  *plVar2 = 0;
  thunk_FUN_03f5d7b8(plVar2,0);
  if (lVar3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x040b3b30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar3 + 0x18))(*(undefined8 *)(lVar3 + 0x40),*(undefined8 *)(lVar3 + 0x28));
    return;
  }
  return;
}

