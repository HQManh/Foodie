// rea decompile_all
// name: System.Text.DecoderFallbackBuffer$$ThrowLastBytesRecursive
// address: 0x763c7bc
// body: available
// range: 0x763c7bc-0x763c9a7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x763c810 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x763c9a0 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x763c9a4 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Text_DecoderFallbackBuffer__ThrowLastBytesRecursive(undefined8 param_1,long param_2)

{
  ulong uVar1;
  int iVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined1 local_44 [4];
  
  if ((DAT_0952226c & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182ff8);
    FUN_03f5c2a4(&DAT_0918b348);
    FUN_03f5c2a4(&DAT_09214708);
    DAT_0952226c = 1;
  }
  if (param_2 == 0) {
LAB_0763c810:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  plVar3 = (long *)thunk_FUN_03f9944c(DAT_0918b348);
  System_Text_StringBuilder___ctor(plVar3,*(int *)(param_2 + 0x18) * 3,0);
  if (0 < *(int *)(param_2 + 0x18)) {
    if (plVar3 == (long *)0x0) goto LAB_0763c810;
    uVar7 = 0;
    do {
      iVar2 = System_Text_StringBuilder__get_Length(plVar3,0);
      if (0 < iVar2) {
        System_Text_StringBuilder__Append(plVar3,0x20,0);
      }
      if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar4 = System_Globalization_CultureInfo__get_InvariantCulture(0);
      if (*(uint *)(param_2 + 0x18) <= uVar7) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      local_44[0] = *(undefined1 *)(param_2 + 0x20 + uVar7);
      uVar5 = FUN_03f5c42c(DAT_095353f0,local_44);
      System_Text_StringBuilder__AppendFormat(plVar3,uVar4,DAT_09214708,uVar5,0);
      uVar1 = uVar7 + 1;
    } while ((uVar7 < 0x13) && (uVar7 = uVar1, (long)uVar1 < (long)*(int *)(param_2 + 0x18)));
    if (uVar1 == 0x14) {
      uVar4 = thunk_FUN_03fc39d4(&DAT_091f5e18);
      System_Text_StringBuilder__Append(plVar3,uVar4,0);
    }
  }
  FUN_039b1d98(plVar3);
  uVar4 = (**(code **)(*plVar3 + 0x168))(plVar3,*(undefined8 *)(*plVar3 + 0x170));
  uVar5 = thunk_FUN_03fc39d4(&DAT_0920b758);
  uVar4 = SR__Format(uVar5,uVar4,0);
  thunk_FUN_03fc39d4(&DAT_09181548);
  uVar5 = thunk_FUN_03f9944c();
  uVar6 = thunk_FUN_03fc39d4(&DAT_09218728);
  System_ArgumentException___ctor(uVar5,uVar4,uVar6,0);
  uVar4 = thunk_FUN_03fc39d4(&DAT_091c81b0);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar5,uVar4);
}

