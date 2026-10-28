// rea decompile_all
// name: System.IO.StreamWriter$$WriteAsync
// address: 0x7570a18
// body: available
// range: 0x7570a18-0x7570d13 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7570b14 to 0x7570d14 System.IO.TextWriter$$WriteAsync (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x7570b44 to 0x75d75b0 System.ThrowHelper$$ThrowArgumentOutOfRangeException (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7570d10 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 System_IO_StreamWriter__WriteAsync(long param_1,long param_2,uint param_3,uint param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long local_60;
  undefined8 local_58;
  
  if ((DAT_09521a39 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b9660);
    FUN_03f5c2a4(&DAT_09172f20);
    FUN_03f5c2a4(&DAT_0918b328);
    DAT_09521a39 = 1;
  }
  if (param_2 == 0) {
    thunk_FUN_03fc39d4(&DAT_09181550);
    uVar8 = thunk_FUN_03f9944c();
    uVar5 = thunk_FUN_03fc39d4(&DAT_092185d8);
    uVar4 = thunk_FUN_03fc39d4(&DAT_091fcf10);
    System_ArgumentNullException___ctor(uVar8,uVar5,uVar4,0);
  }
  else {
    if ((int)param_3 < 0) {
      thunk_FUN_03fc39d4(&DAT_09181558);
      uVar8 = thunk_FUN_03f9944c();
      puVar7 = &DAT_0921d350;
    }
    else {
      if (-1 < (int)param_4) {
        if ((int)(*(int *)(param_2 + 0x18) - param_3) < (int)param_4) {
          thunk_FUN_03fc39d4(&DAT_09181548);
          uVar8 = thunk_FUN_03f9944c();
          uVar5 = thunk_FUN_03fc39d4(&DAT_09209710);
          System_ArgumentException___ctor(uVar8,uVar5,0);
        }
        else {
          uVar4 = System_Object__GetType(param_1,0);
          uVar5 = DAT_09172f20;
          if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
            FUN_03f5c424(DAT_095354b8);
          }
          uVar5 = System_Type__GetTypeFromHandle(uVar5,0);
          uVar6 = System_Type__op_Inequality(uVar4,uVar5,0);
          if ((uVar6 & 1) != 0) {
            uVar5 = System_IO_TextWriter__WriteAsync(param_1,param_2,param_3,param_4);
            return uVar5;
          }
          if (*(long *)(param_1 + 0x30) != 0) {
            System_IO_StreamWriter__CheckAsyncTaskInProgress(param_1);
            local_60 = 0;
            local_58 = 0;
            if ((param_3 <= *(uint *)(param_2 + 0x18)) &&
               (param_4 <= *(uint *)(param_2 + 0x18) - param_3)) {
              local_60 = param_2;
              thunk_FUN_03f5d7b8(&local_60,param_2);
              uVar5 = *(undefined8 *)(param_1 + 0x50);
              uVar4 = *(undefined8 *)(param_1 + 0x18);
              uVar1 = *(undefined4 *)(param_1 + 0x58);
              uVar2 = *(undefined4 *)(param_1 + 0x5c);
              cVar3 = *(char *)(param_1 + 0x60);
              local_58 = CONCAT44(param_4,param_3);
              if (*(int *)(DAT_0918b328 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              uVar5 = System_IO_StreamWriter__WriteAsyncInternal
                                (param_1,local_60,local_58,uVar5,uVar1,uVar2,uVar4,cVar3 != '\0',0,0
                                );
              *(undefined8 *)(param_1 + 0x68) = uVar5;
              thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x68),uVar5);
              return uVar5;
            }
                    /* WARNING: Subroutine does not return */
            System_ThrowHelper__ThrowArgumentOutOfRangeException(0);
          }
          thunk_FUN_03fc39d4(&DAT_09188ae0);
          uVar8 = thunk_FUN_03f9944c();
          uVar5 = thunk_FUN_03fc39d4(&DAT_091fd6c0);
          System_ObjectDisposedException___ctor(uVar8,0,uVar5,0);
        }
        goto LAB_07570cfc;
      }
      thunk_FUN_03fc39d4(&DAT_09181558);
      uVar8 = thunk_FUN_03f9944c();
      puVar7 = &DAT_09219b28;
    }
    uVar5 = thunk_FUN_03fc39d4(puVar7);
    uVar4 = thunk_FUN_03fc39d4(&DAT_09208d80);
    System_ArgumentOutOfRangeException___ctor(uVar8,uVar5,uVar4,0);
  }
LAB_07570cfc:
  uVar5 = thunk_FUN_03fc39d4(&DAT_091da198);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar8,uVar5);
}

