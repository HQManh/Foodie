// rea decompile_all
// name: Mono.Security.X509.X501$$ToString
// address: 0x73f9c6c
// body: available
// range: 0x73f9c6c-0x73f9e2b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x73f9e28 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Mono_Security_X509_X501__ToString(long param_1,ulong param_2,undefined8 param_3,uint param_4)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  long *plVar4;
  long *plVar5;
  undefined8 uVar6;
  
  if ((DAT_09520e3b & 1) == 0) {
    FUN_03f5c2a4(&DAT_0918b348);
    FUN_03f5c2a4(&DAT_0918d0e0);
    DAT_09520e3b = 1;
  }
  plVar4 = (long *)thunk_FUN_03f9944c(DAT_0918b348);
  System_Text_StringBuilder___ctor(plVar4,0);
  if ((param_2 & 1) == 0) {
    if (param_1 != 0) {
      iVar2 = 0;
      do {
        plVar5 = *(long **)(param_1 + 0x20);
        iVar3 = 0;
        if (plVar5 != (long *)0x0) {
          iVar3 = (**(code **)(*plVar5 + 0x298))(plVar5,*(undefined8 *)(*plVar5 + 0x2a0));
        }
        if (iVar3 <= iVar2) goto LAB_073f9e04;
        uVar6 = Mono_Security_ASN1__get_Item(param_1,iVar2);
        if (*(int *)(DAT_0918d0e0 + 0xe4) == 0) {
          FUN_03f5c424(DAT_0918d0e0);
        }
        Mono_Security_X509_X501__AppendEntry(plVar4,uVar6,param_4 & 1);
        plVar5 = *(long **)(param_1 + 0x20);
        iVar3 = 0;
        if (plVar5 != (long *)0x0) {
          iVar3 = (**(code **)(*plVar5 + 0x298))(plVar5,*(undefined8 *)(*plVar5 + 0x2a0));
        }
        if (iVar2 < iVar3 + -1) {
          if (plVar4 == (long *)0x0) break;
          System_Text_StringBuilder__Append(plVar4,param_3,0);
        }
        iVar2 = iVar2 + 1;
      } while( true );
    }
  }
  else {
    if (param_1 == 0) goto LAB_073f9e28;
    plVar5 = *(long **)(param_1 + 0x20);
    if (plVar5 != (long *)0x0) {
      iVar2 = (**(code **)(*plVar5 + 0x298))(plVar5,*(undefined8 *)(*plVar5 + 0x2a0));
      iVar2 = iVar2 + -1;
      if (-1 < iVar2) {
        do {
          uVar6 = Mono_Security_ASN1__get_Item(param_1,iVar2);
          if (*(int *)(DAT_0918d0e0 + 0xe4) == 0) {
            FUN_03f5c424(DAT_0918d0e0);
          }
          Mono_Security_X509_X501__AppendEntry(plVar4,uVar6,param_4 & 1);
          if (iVar2 == 0) goto LAB_073f9e04;
          if (plVar4 == (long *)0x0) goto LAB_073f9e28;
          System_Text_StringBuilder__Append(plVar4,param_3,0);
          bVar1 = 0 < iVar2;
          iVar2 = iVar2 + -1;
        } while (bVar1);
        goto LAB_073f9e08;
      }
    }
LAB_073f9e04:
    if (plVar4 != (long *)0x0) {
LAB_073f9e08:
                    /* WARNING: Could not recover jumptable at 0x073f9e24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
      return;
    }
  }
LAB_073f9e28:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

