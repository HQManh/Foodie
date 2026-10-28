// rea decompile_all
// name: System.Runtime.Remoting.ConfigHandler$$ReadLifetine
// address: 0x7483df4
// body: available
// range: 0x7483df4-0x7484347 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74842b4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74842b8 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7484344 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Runtime_Remoting_ConfigHandler__ReadLifetine(undefined8 param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  ulong uVar6;
  undefined8 uVar7;
  
  if ((DAT_09521276 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09194970);
    FUN_03f5c2a4(&DAT_09187870);
    FUN_03f5c2a4(&DAT_092230c8);
    FUN_03f5c2a4(&DAT_09221890);
    FUN_03f5c2a4(&DAT_0921e508);
    FUN_03f5c2a4(&DAT_0921e510);
    DAT_09521276 = 1;
  }
  if (param_2 != (long *)0x0) {
    uVar6 = 0;
    do {
      lVar3 = *param_2;
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == DAT_09194970) {
            puVar1 = (undefined8 *)(lVar3 + (long)(*piVar5 + 4) * 0x10 + 0x138);
            goto LAB_07483ef8;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 != 0);
      }
      puVar1 = (undefined8 *)FUN_03f95da8(param_2,DAT_09194970,4);
LAB_07483ef8:
      lVar3 = (*(code *)*puVar1)(param_2,puVar1[1]);
      if (lVar3 == 0) break;
      if ((long)*(int *)(lVar3 + 0x18) <= (long)uVar6) {
        return;
      }
      lVar3 = *param_2;
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == DAT_09194970) {
            puVar1 = (undefined8 *)(lVar3 + (long)(*piVar5 + 4) * 0x10 + 0x138);
            goto LAB_07483f64;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 != 0);
      }
      puVar1 = (undefined8 *)FUN_03f95da8(param_2,DAT_09194970,4);
LAB_07483f64:
      lVar3 = (*(code *)*puVar1)(param_2,puVar1[1]);
      if (lVar3 == 0) break;
      if (*(uint *)(lVar3 + 0x18) <= uVar6) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      uVar7 = *(undefined8 *)(lVar3 + uVar6 * 8 + 0x20);
      uVar4 = System_String__op_Equality(uVar7,DAT_0921e510,0);
      if ((uVar4 & 1) == 0) {
        uVar4 = System_String__op_Equality(uVar7,DAT_092230c8,0);
        if ((uVar4 & 1) == 0) {
          uVar4 = System_String__op_Equality(uVar7,DAT_09221890,0);
          if ((uVar4 & 1) == 0) {
            uVar4 = System_String__op_Equality(uVar7,DAT_0921e508,0);
            if ((uVar4 & 1) == 0) {
              FUN_039b1d98(param_2);
              uVar7 = thunk_FUN_03fc39d4(&DAT_09194970);
              uVar7 = FUN_039afee4(4,uVar7,param_2);
              FUN_039b1d98();
              uVar7 = FUN_039c930c(uVar7,uVar6);
              uVar2 = thunk_FUN_03fc39d4(&DAT_09205600);
              uVar7 = System_String__Concat(uVar2,uVar7,0);
              thunk_FUN_03fc39d4(&DAT_09189ec8);
              uVar2 = thunk_FUN_03f9944c();
              System_Runtime_Remoting_RemotingException___ctor(uVar2,uVar7);
              uVar7 = thunk_FUN_03fc39d4(&DAT_091c5c78);
                    /* WARNING: Subroutine does not return */
              FUN_03f5c414(uVar2,uVar7);
            }
            lVar3 = *param_2;
            uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
            if (uVar4 != 0) {
              piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
              do {
                if (*(long *)(piVar5 + -2) == DAT_09194970) {
                  puVar1 = (undefined8 *)(lVar3 + (long)(*piVar5 + 2) * 0x10 + 0x138);
                  goto LAB_07484254;
                }
                uVar4 = uVar4 - 1;
                piVar5 = piVar5 + 4;
              } while (uVar4 != 0);
            }
            puVar1 = (undefined8 *)FUN_03f95da8(param_2,DAT_09194970,2);
LAB_07484254:
            uVar7 = (*(code *)*puVar1)(param_2,uVar6 & 0xffffffff,puVar1[1]);
            uVar7 = System_Runtime_Remoting_ConfigHandler__ParseTime(uVar7,uVar7);
            if (*(int *)(DAT_09187870 + 0xe4) == 0) {
              FUN_03f5c424(DAT_09187870);
            }
            System_Runtime_Remoting_Lifetime_LifetimeServices__set_LeaseManagerPollTime(uVar7,0);
          }
          else {
            lVar3 = *param_2;
            uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
            if (uVar4 != 0) {
              piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
              do {
                if (*(long *)(piVar5 + -2) == DAT_09194970) {
                  puVar1 = (undefined8 *)(lVar3 + (long)(*piVar5 + 2) * 0x10 + 0x138);
                  goto LAB_074841d8;
                }
                uVar4 = uVar4 - 1;
                piVar5 = piVar5 + 4;
              } while (uVar4 != 0);
            }
            puVar1 = (undefined8 *)FUN_03f95da8(param_2,DAT_09194970,2);
LAB_074841d8:
            uVar7 = (*(code *)*puVar1)(param_2,uVar6 & 0xffffffff,puVar1[1]);
            uVar7 = System_Runtime_Remoting_ConfigHandler__ParseTime(uVar7,uVar7);
            if (*(int *)(DAT_09187870 + 0xe4) == 0) {
              FUN_03f5c424(DAT_09187870);
            }
            if (DAT_095212f1 == '\0') {
              FUN_03f5c2a4(&DAT_09187870);
              DAT_095212f1 = '\x01';
            }
            if (*(int *)(DAT_09187870 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            *(undefined8 *)(*(long *)(DAT_09187870 + 0xb8) + 0x10) = uVar7;
          }
        }
        else {
          lVar3 = *param_2;
          uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
          if (uVar4 != 0) {
            piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
            do {
              if (*(long *)(piVar5 + -2) == DAT_09194970) {
                puVar1 = (undefined8 *)(lVar3 + (long)(*piVar5 + 2) * 0x10 + 0x138);
                goto LAB_07484164;
              }
              uVar4 = uVar4 - 1;
              piVar5 = piVar5 + 4;
            } while (uVar4 != 0);
          }
          puVar1 = (undefined8 *)FUN_03f95da8(param_2,DAT_09194970,2);
LAB_07484164:
          uVar7 = (*(code *)*puVar1)(param_2,uVar6 & 0xffffffff,puVar1[1]);
          uVar7 = System_Runtime_Remoting_ConfigHandler__ParseTime(uVar7,uVar7);
          if (*(int *)(DAT_09187870 + 0xe4) == 0) {
            FUN_03f5c424(DAT_09187870);
          }
          if (DAT_095212f0 == '\0') {
            FUN_03f5c2a4(&DAT_09187870);
            DAT_095212f0 = '\x01';
          }
          if (*(int *)(DAT_09187870 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          *(undefined8 *)(*(long *)(DAT_09187870 + 0xb8) + 0x18) = uVar7;
        }
      }
      else {
        lVar3 = *param_2;
        uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar4 != 0) {
          piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar5 + -2) == DAT_09194970) {
              puVar1 = (undefined8 *)(lVar3 + (long)(*piVar5 + 2) * 0x10 + 0x138);
              goto LAB_07484094;
            }
            uVar4 = uVar4 - 1;
            piVar5 = piVar5 + 4;
          } while (uVar4 != 0);
        }
        puVar1 = (undefined8 *)FUN_03f95da8(param_2,DAT_09194970,2);
LAB_07484094:
        uVar7 = (*(code *)*puVar1)(param_2,uVar6 & 0xffffffff,puVar1[1]);
        uVar7 = System_Runtime_Remoting_ConfigHandler__ParseTime(uVar7,uVar7);
        if (*(int *)(DAT_09187870 + 0xe4) == 0) {
          FUN_03f5c424(DAT_09187870);
        }
        if (DAT_095212ef == '\0') {
          FUN_03f5c2a4(&DAT_09187870);
          DAT_095212ef = '\x01';
        }
        if (*(int *)(DAT_09187870 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        *(undefined8 *)(*(long *)(DAT_09187870 + 0xb8) + 8) = uVar7;
      }
      uVar6 = uVar6 + 1;
    } while( true );
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

