// rea decompile_all
// name: Datpt.Cook_Order.Pooling$$OnUpdate
// address: 0x41a9acc
// body: available
// range: 0x41a9acc-0x41a9c37 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41a9c2c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41a9c30 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41a9c34 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Datpt_Cook_Order_Pooling__OnUpdate(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  if ((DAT_095168a7 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a3d40);
    FUN_03f5c2a4(&DAT_091a3d48);
    FUN_03f5c2a4(&DAT_091a3d50);
    FUN_03f5c2a4(&DAT_091af1b8);
    FUN_03f5c2a4(&DAT_091af1c0);
    FUN_03f5c2a4(&DAT_091b8cb8);
    FUN_03f5c2a4(&DAT_091b8cc8);
    DAT_095168a7 = 1;
  }
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_057e185c(&local_58,*(long *)(param_1 + 0x18),DAT_091af1c0);
    while (uVar3 = FUN_071bd28c(&local_58,DAT_091a3d48), uVar2 = local_48, (uVar3 & 1) != 0) {
      if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar3 = FUN_05e2d2ac(*(long *)(param_1 + 0x10),local_48,DAT_091b8cb8);
      if ((uVar3 & 1) == 0) {
        if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        FUN_05e2cfd8(*(long *)(param_1 + 0x10),uVar2,DAT_091b8cc8);
      }
    }
    FUN_071bd288(&local_58,DAT_091a3d40);
    lVar4 = *(long *)(param_1 + 0x18);
    if (lVar4 != 0) {
      iVar1 = *(int *)(lVar4 + 0x18);
      *(undefined4 *)(lVar4 + 0x18) = 0;
      *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
      if (0 < iVar1) {
        System_Array__Clear(*(undefined8 *)(lVar4 + 0x10),0,iVar1,0);
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

