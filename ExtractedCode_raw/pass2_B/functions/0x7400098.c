// rea decompile_all
// name: Mono.Security.X509.Extensions.AuthorityKeyIdentifierExtension$$ToString
// address: 0x7400098
// body: available
// range: 0x7400098-0x7400217 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74001e8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7400214 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Mono_Security_X509_Extensions_AuthorityKeyIdentifierExtension__ToString(long param_1)

{
  long *plVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  
  if ((DAT_09520e81 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182ff8);
    FUN_03f5c2a4(&DAT_0918b348);
    FUN_03f5c2a4(&DAT_091f5a98);
    FUN_03f5c2a4(&DAT_09213540);
    FUN_03f5c2a4(&DAT_09206650);
    DAT_09520e81 = 1;
  }
  plVar1 = (long *)thunk_FUN_03f9944c(DAT_0918b348);
  System_Text_StringBuilder___ctor(plVar1,0);
  if (*(long *)(param_1 + 0x28) == 0) {
LAB_074001ec:
    if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x07400210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x168))(plVar1,*(undefined8 *)(*plVar1 + 0x170));
      return;
    }
  }
  else if (plVar1 != (long *)0x0) {
    System_Text_StringBuilder__Append(plVar1,DAT_09206650,0);
    lVar4 = *(long *)(param_1 + 0x28);
    if (lVar4 != 0) {
      uVar3 = 0;
      do {
        if ((long)*(int *)(lVar4 + 0x18) <= (long)uVar3) goto LAB_074001ec;
        if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar2 = System_Globalization_CultureInfo__get_InvariantCulture(0);
        if (*(uint *)(lVar4 + 0x18) <= uVar3) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        uVar2 = System_Byte__ToString(lVar4 + uVar3 + 0x20,DAT_09213540,uVar2,0);
        System_Text_StringBuilder__Append(plVar1,uVar2,0);
        if ((uVar3 & 0x80000001) == 1) {
          System_Text_StringBuilder__Append(plVar1,DAT_091f5a98,0);
        }
        lVar4 = *(long *)(param_1 + 0x28);
        uVar3 = uVar3 + 1;
      } while (lVar4 != 0);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

