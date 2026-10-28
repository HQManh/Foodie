// rea decompile_all
// name: Mono.Security.X509.X509Extension$$.ctor
// address: 0x73fe584
// body: available
// range: 0x73fe584-0x73fe587 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Mono_Security_X509_X509Extension___ctor(long *param_1,long *param_2)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  System_Object___ctor(param_1,0);
  if (param_2 == (long *)0x0) {
    thunk_FUN_03fc39d4(&DAT_09181550);
    uVar3 = thunk_FUN_03f9944c();
    uVar4 = thunk_FUN_03fc39d4(&DAT_0921b380);
    System_ArgumentNullException___ctor(uVar3,uVar4,0);
    uVar4 = thunk_FUN_03fc39d4(&DAT_091df550);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar3,uVar4);
  }
  lVar5 = param_2[4];
  if (lVar5 == 0) {
    (**(code **)(*param_2 + 0x188))(param_2,*(undefined8 *)(*param_2 + 400));
    lVar5 = param_2[4];
    if (lVar5 == 0) goto LAB_073fe92c;
  }
  if ((*(char *)(lVar5 + 0x10) == '\x04') &&
     (plVar2 = *(long **)(lVar5 + 0x20), plVar2 != (long *)0x0)) {
    iVar1 = (**(code **)(*plVar2 + 0x298))(plVar2,*(undefined8 *)(*plVar2 + 0x2a0));
    if (iVar1 == 1) {
      param_1[2] = param_2[2];
      thunk_FUN_03f5d7b8(param_1 + 2);
      lVar5 = param_2[4];
      *(char *)(param_1 + 3) = (char)param_2[3];
      if (lVar5 == 0) {
        (**(code **)(*param_2 + 0x188))(param_2,*(undefined8 *)(*param_2 + 400));
        lVar5 = param_2[4];
      }
      param_1[4] = lVar5;
      thunk_FUN_03f5d7b8();
                    /* WARNING: Could not recover jumptable at 0x073fe928. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x178))(param_1,*(undefined8 *)(*param_1 + 0x180));
      return;
    }
  }
LAB_073fe92c:
  uVar3 = thunk_FUN_03fc39d4(&DAT_09205470);
  thunk_FUN_03fc39d4(&DAT_09181548);
  uVar4 = thunk_FUN_03f9944c();
  System_ArgumentException___ctor(uVar4,uVar3,0);
  uVar3 = thunk_FUN_03fc39d4(&DAT_091df550);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar4,uVar3);
}

