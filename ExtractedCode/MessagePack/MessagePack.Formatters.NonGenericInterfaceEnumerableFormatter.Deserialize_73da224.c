// rea decompile_all
// name: MessagePack.Formatters.NonGenericInterfaceEnumerableFormatter$$Deserialize
// address: 0x73da224
// body: available
// range: 0x73da224-0x73da597 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x73da560 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73da564 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73da568 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73da574 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73da578 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73da58c to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73da594 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x073da590) */

long * MessagePack_Formatters_NonGenericInterfaceEnumerableFormatter__Deserialize
                 (undefined8 param_1,long param_2,long param_3)

{
  char cVar1;
  uint uVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long *plVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined8 local_60;
  long local_58;
  
  local_58 = param_2;
  if ((DAT_09520d08 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c0270);
    FUN_03f5c2a4(&DAT_09182348);
    FUN_03f5c2a4(&DAT_091ccf38);
    FUN_03f5c2a4(&DAT_09184938);
    FUN_03f5c2a4(&DAT_0917b1e0);
    FUN_03f5c2a4(&DAT_091d4848);
    FUN_03f5c2a4(&DAT_09180318);
    DAT_09520d08 = 1;
  }
  local_60 = 0;
  if (DAT_09516fa8 == '\0') {
    FUN_03f5c2a4(&DAT_091b9f90);
    DAT_09516fa8 = '\x01';
  }
  cVar1 = MessagePack_MessagePackReader__get_NextCode(param_2,0);
  if (cVar1 == -0x40) {
    FUN_042658c0(param_2,1,DAT_091b9f90);
    plVar9 = (long *)0x0;
  }
  else {
    uVar2 = MessagePack_MessagePackReader__ReadArrayHeader(param_2,0);
    lVar5 = DAT_091c0270;
    if (uVar2 != 0) {
      if (param_3 != 0) {
        uVar10 = *(undefined8 *)(param_3 + 0x10);
        if (*(int *)(DAT_09184938 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        plVar9 = (long *)FUN_04264fcc(uVar10,DAT_091ccf38);
        plVar3 = (long *)FUN_03f5c394(DAT_09180318,(ulong)uVar2);
        if (*(long *)(param_3 + 0x28) != 0) {
          MessagePack_MessagePackSecurity__DepthStep(*(long *)(param_3 + 0x28),param_2,0);
          if (0 < (int)uVar2) {
            uVar11 = 0;
            do {
              local_60 = *(undefined8 *)(local_58 + 0x80);
              if (*(int *)(DAT_09182348 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              System_Threading_CancellationToken__ThrowIfCancellationRequested(&local_60,0);
              lVar5 = local_58;
              if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              lVar6 = *plVar9;
              uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
              if (uVar7 != 0) {
                piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar8 + -2) == DAT_0917b1e0) {
                    puVar4 = (undefined8 *)(lVar6 + (long)(*piVar8 + 1) * 0x10 + 0x138);
                    goto LAB_073da444;
                  }
                  uVar7 = uVar7 - 1;
                  piVar8 = piVar8 + 4;
                } while (uVar7 != 0);
              }
              puVar4 = (undefined8 *)FUN_03f95da8(plVar9,DAT_0917b1e0,1);
LAB_073da444:
              lVar5 = (*(code *)*puVar4)(plVar9,lVar5,param_3,puVar4[1]);
              if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              if ((lVar5 != 0) &&
                 (lVar6 = thunk_FUN_03f99350(lVar5,*(undefined8 *)(*plVar3 + 0x40)), lVar6 == 0)) {
                uVar10 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
                FUN_03f5c414(uVar10,0);
              }
              if (*(uint *)(plVar3 + 3) <= uVar11) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c558();
              }
              plVar3[uVar11 + 4] = lVar5;
              thunk_FUN_03f5d7b8(plVar3 + uVar11 + 4,lVar5);
              uVar11 = uVar11 + 1;
            } while (uVar11 != uVar2);
          }
          if (*(int *)(local_58 + 0x88) != -0x80000000) {
            *(int *)(local_58 + 0x88) = *(int *)(local_58 + 0x88) + -1;
            return plVar3;
          }
          uVar10 = FUN_03f5c560();
                    /* WARNING: Subroutine does not return */
          FUN_03f5c414(uVar10,DAT_091d4848);
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar6 = *(long *)(DAT_091c0270 + 0x38);
    if (lVar6 == 0) {
      FUN_03f95ac8(DAT_091c0270);
      lVar6 = *(long *)(lVar5 + 0x38);
    }
    lVar6 = *(long *)(lVar6 + 0x10);
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_03f95a6c();
    }
    if (*(int *)(lVar6 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0x38) + 0x10);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_03f95a6c();
    }
    plVar9 = (long *)**(undefined8 **)(lVar5 + 0xb8);
  }
  return plVar9;
}

