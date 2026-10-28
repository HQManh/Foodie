// rea decompile_all
// name: MessagePack.Formatters.ExpandoObjectFormatter$$Deserialize
// address: 0x73dca80
// body: available
// range: 0x73dca80-0x73dce13 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x73dcde8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73dcdec to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73dcdf0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73dcdf4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73dce08 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73dce10 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x073dce0c) */

long * MessagePack_Formatters_ExpandoObjectFormatter__Deserialize
                 (undefined8 param_1,long param_2,long param_3)

{
  char cVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long *plVar10;
  undefined8 uVar11;
  int iVar12;
  
  if ((DAT_09520d1a & 1) == 0) {
    FUN_03f5c2a4(&DAT_091cbb58);
    FUN_03f5c2a4(&DAT_09184378);
    FUN_03f5c2a4(&DAT_091ccf38);
    FUN_03f5c2a4(&DAT_091ccf48);
    FUN_03f5c2a4(&DAT_09184938);
    FUN_03f5c2a4(&DAT_0917a210);
    FUN_03f5c2a4(&DAT_0917b1e0);
    FUN_03f5c2a4(&DAT_0917b1f0);
    DAT_09520d1a = 1;
  }
  if (DAT_09516fa8 == '\0') {
    FUN_03f5c2a4(&DAT_091b9f90);
    DAT_09516fa8 = '\x01';
  }
  cVar1 = MessagePack_MessagePackReader__get_NextCode(param_2,0);
  if (cVar1 == -0x40) {
    FUN_042658c0(param_2,1,DAT_091b9f90);
    plVar10 = (long *)0x0;
  }
  else {
    plVar10 = (long *)thunk_FUN_03f9944c(DAT_09184378);
    System_Dynamic_ExpandoObject___ctor(plVar10,0);
    iVar2 = MessagePack_MessagePackReader__ReadMapHeader(param_2,0);
    if (0 < iVar2) {
      if (param_3 != 0) {
        uVar11 = *(undefined8 *)(param_3 + 0x10);
        if (*(int *)(DAT_09184938 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        plVar3 = (long *)FUN_04264fcc(uVar11,DAT_091ccf48);
        plVar4 = (long *)FUN_04264fcc(uVar11,DAT_091ccf38);
        if (*(long *)(param_3 + 0x28) != 0) {
          MessagePack_MessagePackSecurity__DepthStep(*(long *)(param_3 + 0x28),param_2,0);
          if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          iVar12 = 0;
          do {
            lVar7 = *plVar3;
            uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
            if (uVar8 != 0) {
              piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
              do {
                if (*(long *)(piVar9 + -2) == DAT_0917b1f0) {
                  puVar5 = (undefined8 *)(lVar7 + (long)(*piVar9 + 1) * 0x10 + 0x138);
                  goto LAB_073dcc98;
                }
                uVar8 = uVar8 - 1;
                piVar9 = piVar9 + 4;
              } while (uVar8 != 0);
            }
            puVar5 = (undefined8 *)FUN_03f95da8(plVar3,DAT_0917b1f0,1);
LAB_073dcc98:
            uVar11 = (*(code *)*puVar5)(plVar3,param_2,param_3,puVar5[1]);
            if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            lVar7 = *plVar4;
            uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
            if (uVar8 != 0) {
              piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
              do {
                if (*(long *)(piVar9 + -2) == DAT_0917b1e0) {
                  puVar5 = (undefined8 *)(lVar7 + (long)(*piVar9 + 1) * 0x10 + 0x138);
                  goto LAB_073dcd08;
                }
                uVar8 = uVar8 - 1;
                piVar9 = piVar9 + 4;
              } while (uVar8 != 0);
            }
            puVar5 = (undefined8 *)FUN_03f95da8(plVar4,DAT_0917b1e0,1);
LAB_073dcd08:
            uVar6 = (*(code *)*puVar5)(plVar4,param_2,param_3,puVar5[1]);
            if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            lVar7 = *plVar10;
            uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
            if (uVar8 != 0) {
              piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
              do {
                if (*(long *)(piVar9 + -2) == DAT_0917a210) {
                  puVar5 = (undefined8 *)(lVar7 + (long)(*piVar9 + 5) * 0x10 + 0x138);
                  goto LAB_073dcd74;
                }
                uVar8 = uVar8 - 1;
                piVar9 = piVar9 + 4;
              } while (uVar8 != 0);
            }
            puVar5 = (undefined8 *)FUN_03f95da8(plVar10,DAT_0917a210,5);
LAB_073dcd74:
            (*(code *)*puVar5)(plVar10,uVar11,uVar6,puVar5[1]);
            iVar12 = iVar12 + 1;
            if (iVar12 == iVar2) {
              if (*(int *)(param_2 + 0x88) != -0x80000000) {
                *(int *)(param_2 + 0x88) = *(int *)(param_2 + 0x88) + -1;
                return plVar10;
              }
              uVar11 = FUN_03f5c560();
                    /* WARNING: Subroutine does not return */
              FUN_03f5c414(uVar11,DAT_091cbb58);
            }
          } while( true );
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
  }
  return plVar10;
}

