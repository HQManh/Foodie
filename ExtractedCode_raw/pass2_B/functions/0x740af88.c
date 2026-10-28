// rea decompile_all
// name: Mono.Security.Authenticode.AuthenticodeBase$$ProcessFirstBlock
// address: 0x740af88
// body: available
// range: 0x740af88-0x740b1c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x740b134 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x740b1c0 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 Mono_Security_Authenticode_AuthenticodeBase__ProcessFirstBlock(long param_1)

{
  bool bVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  int iVar9;
  undefined4 local_14;
  
  plVar5 = *(long **)(param_1 + 0x18);
  if (plVar5 == (long *)0x0) {
    uVar6 = 1;
  }
  else {
    (**(code **)(*plVar5 + 0x218))(plVar5,0,*(undefined8 *)(*plVar5 + 0x220));
    lVar8 = *(long *)(param_1 + 0x10);
    if ((lVar8 == 0) || (plVar5 = *(long **)(param_1 + 0x18), plVar5 == (long *)0x0)) {
LAB_0740b134:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    iVar3 = (**(code **)(*plVar5 + 0x368))
                      (plVar5,lVar8,0,*(undefined4 *)(lVar8 + 0x18),*(undefined8 *)(*plVar5 + 0x370)
                      );
    *(undefined4 *)(param_1 + 0x20) = 1;
    *(int *)(param_1 + 0x24) = iVar3;
    if (iVar3 < 0x40) {
      uVar6 = 2;
    }
    else {
      sVar2 = Mono_Security_BitConverterLE__ToUInt16(*(undefined8 *)(param_1 + 0x10),0,0);
      if (sVar2 == 0x5a4d) {
        iVar3 = Mono_Security_BitConverterLE__ToInt32(*(undefined8 *)(param_1 + 0x10),0x3c,0);
        *(int *)(param_1 + 0x28) = iVar3;
        if (*(long *)(param_1 + 0x10) != 0) {
          if (*(int *)(*(long *)(param_1 + 0x10) + 0x18) < iVar3) {
            uVar6 = thunk_FUN_03fc39d4(&DAT_09203e18);
            uVar6 = Locale__GetText(uVar6,0);
            lVar8 = *(long *)(param_1 + 0x10);
            FUN_039b1d98(lVar8);
            local_14 = (undefined4)*(undefined8 *)(lVar8 + 0x18);
            uVar7 = FUN_03f5c42c(DAT_09535420,&local_14);
            uVar6 = System_String__Format(uVar6,uVar7,0);
            thunk_FUN_03fc39d4(&DAT_09188920);
            uVar7 = thunk_FUN_03f9944c();
            System_NotSupportedException___ctor(uVar7,uVar6,0);
            uVar6 = thunk_FUN_03fc39d4(&DAT_091c33e0);
                    /* WARNING: Subroutine does not return */
            FUN_03f5c414(uVar7,uVar6);
          }
          plVar5 = *(long **)(param_1 + 0x18);
          if (plVar5 != (long *)0x0) {
            lVar8 = (**(code **)(*plVar5 + 0x1f8))(plVar5,*(undefined8 *)(*plVar5 + 0x200));
            if (lVar8 < iVar3) {
              return 4;
            }
            iVar3 = Mono_Security_BitConverterLE__ToUInt32
                              (*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x28),0);
            if (iVar3 == 0x4550) {
              sVar2 = Mono_Security_BitConverterLE__ToUInt16
                                (*(undefined8 *)(param_1 + 0x10),*(int *)(param_1 + 0x28) + 0x18,0);
              bVar1 = sVar2 == 0x20b;
              iVar3 = 0xa8;
              if (!bVar1) {
                iVar3 = 0x98;
              }
              *(bool *)(param_1 + 0x38) = bVar1;
              iVar9 = 0xac;
              if (!bVar1) {
                iVar9 = 0x9c;
              }
              uVar4 = Mono_Security_BitConverterLE__ToInt32
                                (*(undefined8 *)(param_1 + 0x10),*(int *)(param_1 + 0x28) + iVar3,0)
              ;
              *(undefined4 *)(param_1 + 0x2c) = uVar4;
              uVar4 = Mono_Security_BitConverterLE__ToInt32
                                (*(undefined8 *)(param_1 + 0x10),*(int *)(param_1 + 0x28) + iVar9,0)
              ;
              *(undefined4 *)(param_1 + 0x30) = uVar4;
              uVar4 = Mono_Security_BitConverterLE__ToInt32
                                (*(undefined8 *)(param_1 + 0x10),*(int *)(param_1 + 0x28) + 0xc,0);
              *(undefined4 *)(param_1 + 0x34) = uVar4;
              return 0;
            }
            return 5;
          }
        }
        goto LAB_0740b134;
      }
      uVar6 = 3;
    }
  }
  return uVar6;
}

