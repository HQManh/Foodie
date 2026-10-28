// rea decompile_all
// name: CookingGraph.CustomerOrderTranslator$$SerializeMember
// address: 0x4429494
// body: available
// range: 0x4429494-0x4429667 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4429660 to 0x75b2d54 System.Int32$$ToString (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x4429664 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CookingGraph_CustomerOrderTranslator__SerializeMember(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  
  if ((DAT_09517f59 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182ff8);
    FUN_03f5c2a4(&DAT_091c7010);
    FUN_03f5c2a4(&DAT_091ca638);
    FUN_03f5c2a4(&DAT_09178df8);
    FUN_03f5c2a4(&DAT_0918b348);
    FUN_03f5c2a4(&DAT_091f8f68);
    DAT_09517f59 = 1;
  }
  if (param_1 != 0) {
    if (*(int *)(param_1 + 0x10) == 0) {
      if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar3 = System_Globalization_CultureInfo__get_InvariantCulture(0);
      System_Int32__ToString(param_1 + 0x14,uVar3,0);
      return;
    }
    lVar1 = thunk_FUN_03f9944c(DAT_0918b348);
    System_Text_StringBuilder___ctor(lVar1,0);
    if ((lVar1 != 0) && (lVar2 = System_Text_StringBuilder__Append(lVar1,0x7b,0), lVar2 != 0)) {
      uVar5 = 99;
      if (*(int *)(param_1 + 0x10) != 1) {
        uVar5 = 0x67;
      }
      lVar2 = System_Text_StringBuilder__Append(lVar2,uVar5,0);
      if ((lVar2 != 0) &&
         (lVar2 = System_Text_StringBuilder__Append(lVar2,*(undefined4 *)(param_1 + 0x14),0),
         lVar2 != 0)) {
        System_Text_StringBuilder__Append(lVar2,0x3a,0);
        uVar6 = *(undefined8 *)(param_1 + 0x28);
        uVar3 = thunk_FUN_03f9944c(DAT_09178df8);
        FUN_05324070(uVar3,0,DAT_091c7010,0);
        uVar3 = FUN_04af8044(uVar6,uVar3,DAT_091ca638);
        uVar3 = System_String__Join(DAT_091f8f68,uVar3,0);
        System_Text_StringBuilder__Append(lVar1,uVar3,0);
        plVar4 = (long *)System_Text_StringBuilder__Append(lVar1,0x7d,0);
        if (plVar4 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x04429620. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

