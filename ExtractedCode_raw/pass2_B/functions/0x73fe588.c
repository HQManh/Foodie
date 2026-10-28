// rea decompile_all
// name: Mono.Security.X509.X509Extension$$.ctor
// address: 0x73fe588
// body: available
// range: 0x73fe588-0x73fe7e3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x73fe788 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73fe7d0 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73fe7d4 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73fe7d8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73fe7dc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73fe7e0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Mono_Security_X509_X509Extension___ctor(long *param_1,long param_2)

{
  bool bVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *plVar7;
  
  if ((DAT_09520e6a & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180e18);
    DAT_09520e6a = 1;
  }
  System_Object___ctor(param_1,0);
  if (param_2 == 0) goto LAB_073fe788;
  if ((*(char *)(param_2 + 0x10) == '0') &&
     (plVar3 = *(long **)(param_2 + 0x20), plVar3 != (long *)0x0)) {
    iVar2 = (**(code **)(*plVar3 + 0x298))(plVar3,*(undefined8 *)(*plVar3 + 0x2a0));
    if (1 < iVar2) {
      lVar4 = Mono_Security_ASN1__get_Item(param_2,0);
      if (lVar4 != 0) {
        if (*(char *)(lVar4 + 0x10) != '\x06') goto LAB_073fe78c;
        Mono_Security_ASN1__get_Item(param_2,0);
        lVar4 = Mono_Security_ASN1Convert__ToOid();
        param_1[2] = lVar4;
        thunk_FUN_03f5d7b8();
        lVar4 = Mono_Security_ASN1__get_Item(param_2,1);
        if (lVar4 != 0) {
          if (*(char *)(lVar4 + 0x10) == '\x01') {
            lVar4 = Mono_Security_ASN1__get_Item(param_2,1);
            if ((lVar4 == 0) || (lVar4 = Mono_Security_ASN1__get_Value(), lVar4 == 0))
            goto LAB_073fe788;
            if (*(int *)(lVar4 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c558();
            }
            bVar1 = *(char *)(lVar4 + 0x20) == -1;
          }
          else {
            bVar1 = false;
          }
          plVar3 = *(long **)(param_2 + 0x20);
          *(bool *)(param_1 + 3) = bVar1;
          iVar2 = 0;
          if (plVar3 != (long *)0x0) {
            iVar2 = (**(code **)(*plVar3 + 0x298))(plVar3,*(undefined8 *)(*plVar3 + 0x2a0));
          }
          lVar4 = Mono_Security_ASN1__get_Item(param_2,iVar2 + -1);
          plVar3 = param_1 + 4;
          *plVar3 = lVar4;
          thunk_FUN_03f5d7b8(plVar3,lVar4);
          lVar4 = *plVar3;
          if (lVar4 != 0) {
            if (((*(char *)(lVar4 + 0x10) == '\x04') && (*(long *)(lVar4 + 0x18) != 0)) &&
               (0 < *(int *)(*(long *)(lVar4 + 0x18) + 0x18))) {
              plVar7 = *(long **)(lVar4 + 0x20);
              if (plVar7 != (long *)0x0) {
                iVar2 = (**(code **)(*plVar7 + 0x298))(plVar7,*(undefined8 *)(*plVar7 + 0x2a0));
                if (iVar2 != 0) goto LAB_073fe76c;
                if (*plVar3 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
              }
              uVar5 = Mono_Security_ASN1__get_Value();
              uVar6 = thunk_FUN_03f9944c(DAT_09180e18);
              Mono_Security_ASN1___ctor(uVar6,uVar5);
              lVar4 = *plVar3;
              if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              if ((DAT_09520e05 & 1) == 0) {
                FUN_03f5c2a4(&DAT_0917fc88);
                lVar4 = *plVar3;
                DAT_09520e05 = 1;
                if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
              }
              Mono_Security_ASN1__Add(lVar4,uVar6);
            }
LAB_073fe76c:
                    /* WARNING: Could not recover jumptable at 0x073fe784. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*param_1 + 0x178))(param_1,*(undefined8 *)(*param_1 + 0x180));
            return;
          }
        }
      }
LAB_073fe788:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
  }
LAB_073fe78c:
  uVar5 = thunk_FUN_03fc39d4(&DAT_09205470);
  thunk_FUN_03fc39d4(&DAT_09181548);
  uVar6 = thunk_FUN_03f9944c();
  System_ArgumentException___ctor(uVar6,uVar5,0);
  uVar5 = thunk_FUN_03fc39d4(&DAT_091df548);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar6,uVar5);
}

