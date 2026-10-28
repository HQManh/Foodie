// rea decompile_all
// name: MessagePack.Formatters.NonGenericInterfaceDictionaryFormatter$$Deserialize
// address: 0x73db21c
// body: available
// range: 0x73db21c-0x73db5d7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x73db584 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73db588 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73db5b4 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73db5b8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73db5cc to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73db5d4 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x073db5d0) */

long MessagePack_Formatters_NonGenericInterfaceDictionaryFormatter__Deserialize
               (undefined8 param_1,long param_2,long param_3)

{
  char cVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  undefined8 uVar11;
  int iVar12;
  undefined8 local_68;
  
  if ((DAT_09520d0e & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182348);
    FUN_03f5c2a4(&DAT_0919eac8);
    FUN_03f5c2a4(&DAT_0919eac0);
    FUN_03f5c2a4(&DAT_091767f8);
    FUN_03f5c2a4(&DAT_091ccf38);
    FUN_03f5c2a4(&DAT_09184938);
    FUN_03f5c2a4(&DAT_0917b1e0);
    FUN_03f5c2a4(&DAT_091d3570);
    FUN_03f5c2a4(&DAT_091d4840);
    DAT_09520d0e = 1;
  }
  local_68 = 0;
  if (DAT_09516fa8 == '\0') {
    FUN_03f5c2a4(&DAT_091b9f90);
    DAT_09516fa8 = '\x01';
  }
  cVar1 = MessagePack_MessagePackReader__get_NextCode(param_2,0);
  if (cVar1 == -0x40) {
    FUN_042658c0(param_2,1,DAT_091b9f90);
    return 0;
  }
  if (param_3 != 0) {
    uVar11 = *(undefined8 *)(param_3 + 0x10);
    if (*(int *)(DAT_09184938 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    plVar3 = (long *)FUN_04264fcc(uVar11,DAT_091ccf38);
    iVar2 = MessagePack_MessagePackReader__ReadMapHeader(param_2,0);
    if (*(long *)(param_3 + 0x28) != 0) {
      uVar11 = FUN_04c0ee90(*(long *)(param_3 + 0x28),DAT_091d3570);
      lVar4 = thunk_FUN_03f9944c(DAT_091767f8);
      FUN_06fd7700(lVar4,iVar2,uVar11,DAT_0919eac0);
      if (*(long *)(param_3 + 0x28) != 0) {
        MessagePack_MessagePackSecurity__DepthStep(*(long *)(param_3 + 0x28),param_2,0);
        if (0 < iVar2) {
          iVar12 = 0;
          do {
            local_68 = *(undefined8 *)(param_2 + 0x80);
            if (*(int *)(DAT_09182348 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            System_Threading_CancellationToken__ThrowIfCancellationRequested(&local_68,0);
            if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            lVar7 = *plVar3;
            uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
            if (uVar9 != 0) {
              piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
              do {
                if (*(long *)(piVar10 + -2) == DAT_0917b1e0) {
                  puVar5 = (undefined8 *)(lVar7 + (long)(*piVar10 + 1) * 0x10 + 0x138);
                  goto LAB_073db480;
                }
                uVar9 = uVar9 - 1;
                piVar10 = piVar10 + 4;
              } while (uVar9 != 0);
            }
            puVar5 = (undefined8 *)FUN_03f95da8(plVar3,DAT_0917b1e0,1);
LAB_073db480:
            lVar7 = (*(code *)*puVar5)(plVar3,param_2,param_3,puVar5[1]);
            lVar8 = *plVar3;
            uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
            if (uVar9 != 0) {
              piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
              do {
                if (*(long *)(piVar10 + -2) == DAT_0917b1e0) {
                  puVar5 = (undefined8 *)(lVar8 + (long)(*piVar10 + 1) * 0x10 + 0x138);
                  goto LAB_073db4ec;
                }
                uVar9 = uVar9 - 1;
                piVar10 = piVar10 + 4;
              } while (uVar9 != 0);
            }
            puVar5 = (undefined8 *)FUN_03f95da8(plVar3,DAT_0917b1e0,1);
LAB_073db4ec:
            uVar11 = (*(code *)*puVar5)(plVar3,param_2,param_3,puVar5[1]);
            if (lVar7 == 0) {
              thunk_FUN_03fc39d4(&DAT_091d35b8);
              uVar11 = FUN_04c10778();
              uVar6 = thunk_FUN_03fc39d4(&DAT_091d4840);
                    /* WARNING: Subroutine does not return */
              FUN_03f5c414(uVar11,uVar6);
            }
            if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            FUN_06fd8454(lVar4,lVar7,uVar11,DAT_0919eac8);
            iVar12 = iVar12 + 1;
          } while (iVar12 != iVar2);
        }
        if (*(int *)(param_2 + 0x88) != -0x80000000) {
          *(int *)(param_2 + 0x88) = *(int *)(param_2 + 0x88) + -1;
          return lVar4;
        }
        uVar11 = FUN_03f5c560();
                    /* WARNING: Subroutine does not return */
        FUN_03f5c414(uVar11,DAT_091d4840);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

