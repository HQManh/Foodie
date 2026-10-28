// rea decompile_all
// name: System.Reflection.RuntimeAssembly$$GetManifestResourceStream
// address: 0x74eceb0
// body: available
// range: 0x74eceb0-0x74ed217 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74ed1bc to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74ed1c0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74ed214 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long System_Reflection_RuntimeAssembly__GetManifestResourceStream(long *param_1,long param_2)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 local_38;
  int local_24;
  
  if ((DAT_095215f6 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09184580);
    FUN_03f5c2a4(&DAT_09188f20);
    FUN_03f5c2a4(&DAT_09193ff8);
    DAT_095215f6 = 1;
  }
  local_24 = 0;
  local_38 = 0;
  if (param_2 == 0) {
    thunk_FUN_03fc39d4(&DAT_09181550);
    uVar6 = thunk_FUN_03f9944c();
    uVar3 = thunk_FUN_03fc39d4(&DAT_0921fa28);
    System_ArgumentNullException___ctor(uVar6,uVar3,0);
  }
  else {
    if (*(int *)(param_2 + 0x10) != 0) {
      plVar2 = (long *)(**(code **)(*param_1 + 0x2d8))
                                 (param_1,param_2,*(undefined8 *)(*param_1 + 0x2e0));
      if (plVar2 == (long *)0x0) {
        lVar8 = thunk_FUN_03f6aadc();
        if (lVar8 != 0) {
          plVar2 = (long *)System_AppDomain__DoResourceResolve(lVar8,param_2,param_1,0);
          uVar4 = System_Reflection_Assembly__op_Inequality(plVar2,0);
          if (((uVar4 & 1) == 0) ||
             (uVar4 = System_Reflection_Assembly__op_Inequality(plVar2,param_1), (uVar4 & 1) == 0))
          {
            return 0;
          }
          if (plVar2 != (long *)0x0) {
            lVar8 = *plVar2;
            goto LAB_074ecfb0;
          }
        }
      }
      else {
        uVar3 = (**(code **)(*plVar2 + 0x178))(plVar2,*(undefined8 *)(*plVar2 + 0x180));
        uVar4 = System_Reflection_Assembly__op_Inequality(uVar3,0);
        lVar8 = *plVar2;
        if ((uVar4 & 1) == 0) {
          lVar8 = (**(code **)(lVar8 + 0x188))(plVar2,*(undefined8 *)(lVar8 + 400));
          if ((lVar8 != 0) &&
             (iVar1 = (**(code **)(*plVar2 + 0x198))(plVar2,*(undefined8 *)(*plVar2 + 0x1a0)),
             iVar1 == 0)) {
            if ((char)param_1[10] != '\0') {
              FUN_039b1d98(plVar2);
              uVar3 = (**(code **)(*plVar2 + 0x188))(plVar2,*(undefined8 *)(*plVar2 + 400));
              thunk_FUN_03fc39d4(&DAT_09184570);
              uVar6 = thunk_FUN_03f9944c();
              System_IO_FileNotFoundException___ctor(uVar6,uVar3,0);
              uVar3 = thunk_FUN_03fc39d4(&DAT_091d80a0);
                    /* WARNING: Subroutine does not return */
              FUN_03f5c414(uVar6,uVar3);
            }
            uVar3 = (**(code **)(*param_1 + 0x1e8))(param_1,*(undefined8 *)(*param_1 + 0x1f0));
            if (*(int *)(DAT_09188f20 + 0xe4) == 0) {
              FUN_03f5c424(DAT_09188f20);
            }
            uVar3 = System_IO_Path__GetDirectoryName(uVar3,0);
            uVar6 = (**(code **)(*plVar2 + 0x188))(plVar2,*(undefined8 *)(*plVar2 + 400));
            uVar3 = System_IO_Path__Combine(uVar3,uVar6,0);
            lVar8 = thunk_FUN_03f9944c(DAT_09184580);
            System_IO_FileStream___ctor(lVar8,uVar3,3,1,0);
            return lVar8;
          }
          lVar8 = FUN_03f66e40(param_1,param_2,&local_24,&local_38);
          lVar5 = System_IntPtr__op_Explicit(0,0);
          if (lVar8 != lVar5) {
            uVar6 = System_IntPtr__op_Explicit(lVar8,0);
            uVar3 = local_38;
            lVar5 = (long)local_24;
            lVar8 = thunk_FUN_03f9944c(DAT_09193ff8);
            System_IO_UnmanagedMemoryStream___ctor(lVar8,uVar6,lVar5,0);
            *(undefined8 *)(lVar8 + 0x68) = uVar3;
            thunk_FUN_03f5d7b8((undefined8 *)(lVar8 + 0x68),uVar3);
            return lVar8;
          }
          return 0;
        }
        plVar2 = (long *)(**(code **)(lVar8 + 0x178))(plVar2,*(undefined8 *)(lVar8 + 0x180));
        if (plVar2 != (long *)0x0) {
          lVar8 = *plVar2;
LAB_074ecfb0:
                    /* WARNING: Could not recover jumptable at 0x074ecfcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          lVar8 = (**(code **)(lVar8 + 0x238))(plVar2,param_2,*(undefined8 *)(lVar8 + 0x240));
          return lVar8;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    thunk_FUN_03fc39d4(&DAT_09181548);
    uVar6 = thunk_FUN_03f9944c();
    uVar3 = thunk_FUN_03fc39d4(&DAT_0920dc50);
    uVar7 = thunk_FUN_03fc39d4(&DAT_0921fa28);
    System_ArgumentException___ctor(uVar6,uVar3,uVar7,0);
  }
  uVar3 = thunk_FUN_03fc39d4(&DAT_091d80a0);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar6,uVar3);
}

