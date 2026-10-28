// rea decompile_all
// name: System.Security.Cryptography.SHA384Managed$$SHATransform
// address: 0x746b3ec
// body: available
// range: 0x746b3ec-0x746b963 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x746b95c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x746b960 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Security_Cryptography_SHA384Managed__SHATransform
               (long param_1,ulong *param_2,undefined8 param_3)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong local_78;
  ulong local_68;
  
  if ((DAT_095211c5 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0918a498);
    DAT_095211c5 = 1;
  }
  local_68 = param_2[4];
  local_78 = param_2[5];
  uVar9 = *param_2;
  uVar12 = param_2[1];
  uVar11 = param_2[2];
  uVar10 = param_2[3];
  uVar8 = param_2[6];
  uVar7 = param_2[7];
  System_Security_Cryptography_Utils__QuadWordFromBigEndian(param_1,0x10,param_3);
  if (*(int *)(DAT_0918a498 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  System_Security_Cryptography_SHA384Managed__SHA384Expand(param_1);
  lVar6 = 0x30;
  uVar13 = 0;
  while( true ) {
    if (*(int *)(DAT_0918a498 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar2 = System_Security_Cryptography_SHA384Managed__Sigma_1(local_68);
    lVar4 = **(long **)(DAT_0918a498 + 0xb8);
    if (lVar4 == 0) break;
    if (*(uint *)(lVar4 + 0x18) <= uVar13) {
LAB_0746b960:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
    lVar2 = (local_68 & local_78) + uVar7 + (uVar8 & (local_68 ^ 0xffffffffffffffff)) + lVar2 +
            *(long *)(param_1 + lVar6 + -0x30) + *(long *)(lVar4 + lVar6 + -0x10);
    uVar10 = lVar2 + uVar10;
    lVar4 = System_Security_Cryptography_SHA384Managed__Sigma_0(uVar9);
    lVar3 = System_Security_Cryptography_SHA384Managed__Sigma_1(uVar10);
    lVar5 = **(long **)(DAT_0918a498 + 0xb8);
    if (lVar5 == 0) break;
    if ((ulong)*(uint *)(lVar5 + 0x18) <= uVar13 + 1) goto LAB_0746b960;
    uVar7 = lVar2 + ((uVar12 ^ uVar11) & uVar9 ^ uVar12 & uVar11) + lVar4;
    lVar2 = lVar3 + uVar8 + (uVar10 & local_68) + (local_78 & (uVar10 ^ 0xffffffffffffffff)) +
            *(long *)(lVar5 + lVar6 + -8) + *(long *)(param_1 + lVar6 + -0x28);
    uVar11 = lVar2 + uVar11;
    lVar4 = System_Security_Cryptography_SHA384Managed__Sigma_0(uVar7);
    lVar3 = System_Security_Cryptography_SHA384Managed__Sigma_1(uVar11);
    lVar5 = **(long **)(DAT_0918a498 + 0xb8);
    if (lVar5 == 0) break;
    if ((ulong)*(uint *)(lVar5 + 0x18) <= uVar13 + 2) goto LAB_0746b960;
    uVar8 = lVar2 + (uVar7 & (uVar9 ^ uVar12) ^ uVar9 & uVar12) + lVar4;
    lVar2 = lVar3 + local_78 + (uVar11 & uVar10) + (local_68 & (uVar11 ^ 0xffffffffffffffff)) +
            *(long *)(lVar5 + lVar6) + *(long *)(param_1 + lVar6 + -0x20);
    uVar12 = lVar2 + uVar12;
    lVar4 = System_Security_Cryptography_SHA384Managed__Sigma_0(uVar8);
    lVar3 = System_Security_Cryptography_SHA384Managed__Sigma_1(uVar12);
    lVar5 = **(long **)(DAT_0918a498 + 0xb8);
    if (lVar5 == 0) break;
    if ((ulong)*(uint *)(lVar5 + 0x18) <= uVar13 + 3) goto LAB_0746b960;
    local_78 = lVar2 + (uVar8 & (uVar7 ^ uVar9) ^ uVar7 & uVar9) + lVar4;
    lVar2 = lVar3 + local_68 + (uVar12 & uVar11) + (uVar10 & (uVar12 ^ 0xffffffffffffffff)) +
            *(long *)(lVar5 + lVar6 + 8) + *(long *)(param_1 + lVar6 + -0x18);
    uVar9 = lVar2 + uVar9;
    lVar4 = System_Security_Cryptography_SHA384Managed__Sigma_0(local_78);
    lVar3 = System_Security_Cryptography_SHA384Managed__Sigma_1(uVar9);
    lVar5 = **(long **)(DAT_0918a498 + 0xb8);
    if (lVar5 == 0) break;
    if ((ulong)*(uint *)(lVar5 + 0x18) <= uVar13 + 4) goto LAB_0746b960;
    local_68 = lVar2 + (local_78 & (uVar8 ^ uVar7) ^ uVar8 & uVar7) + lVar4;
    lVar2 = lVar3 + uVar10 + (uVar9 & uVar12) + (uVar11 & (uVar9 ^ 0xffffffffffffffff)) +
            *(long *)(lVar5 + lVar6 + 0x10) + *(long *)(param_1 + lVar6 + -0x10);
    uVar7 = lVar2 + uVar7;
    lVar4 = System_Security_Cryptography_SHA384Managed__Sigma_0(local_68);
    lVar3 = System_Security_Cryptography_SHA384Managed__Sigma_1(uVar7);
    lVar5 = **(long **)(DAT_0918a498 + 0xb8);
    if (lVar5 == 0) break;
    if ((ulong)*(uint *)(lVar5 + 0x18) <= uVar13 + 5) goto LAB_0746b960;
    uVar10 = lVar2 + (local_68 & (local_78 ^ uVar8) ^ local_78 & uVar8) + lVar4;
    lVar2 = lVar3 + uVar11 + (uVar7 & uVar9) + (uVar12 & (uVar7 ^ 0xffffffffffffffff)) +
            *(long *)(lVar5 + lVar6 + 0x18) + *(long *)(param_1 + lVar6 + -8);
    uVar8 = lVar2 + uVar8;
    lVar4 = System_Security_Cryptography_SHA384Managed__Sigma_0(uVar10);
    lVar3 = System_Security_Cryptography_SHA384Managed__Sigma_1(uVar8);
    lVar5 = **(long **)(DAT_0918a498 + 0xb8);
    if (lVar5 == 0) break;
    if ((ulong)*(uint *)(lVar5 + 0x18) <= uVar13 + 6) goto LAB_0746b960;
    uVar11 = lVar2 + (uVar10 & (local_68 ^ local_78) ^ local_68 & local_78) + lVar4;
    lVar2 = lVar3 + uVar12 + (uVar8 & uVar7) + (uVar9 & (uVar8 ^ 0xffffffffffffffff)) +
            *(long *)(lVar5 + lVar6 + 0x20) + *(long *)(param_1 + lVar6);
    local_78 = lVar2 + local_78;
    lVar4 = System_Security_Cryptography_SHA384Managed__Sigma_0(uVar11);
    lVar3 = System_Security_Cryptography_SHA384Managed__Sigma_1(local_78);
    lVar5 = **(long **)(DAT_0918a498 + 0xb8);
    if (lVar5 == 0) break;
    if ((ulong)*(uint *)(lVar5 + 0x18) <= uVar13 + 7) goto LAB_0746b960;
    lVar3 = lVar3 + uVar9 + (local_78 & uVar8) + (uVar7 & (local_78 ^ 0xffffffffffffffff)) +
            *(long *)(lVar5 + lVar6 + 0x28) + *(long *)(param_1 + lVar6 + 8);
    uVar12 = lVar2 + (uVar11 & (uVar10 ^ local_68) ^ uVar10 & local_68) + lVar4;
    local_68 = lVar3 + local_68;
    lVar2 = System_Security_Cryptography_SHA384Managed__Sigma_0(uVar12);
    lVar6 = lVar6 + 0x40;
    bVar1 = 0x47 < uVar13;
    uVar9 = lVar3 + (uVar12 & (uVar11 ^ uVar10) ^ uVar11 & uVar10) + lVar2;
    uVar13 = uVar13 + 8;
    if (bVar1) {
      *param_2 = *param_2 + uVar9;
      param_2[1] = param_2[1] + uVar12;
      param_2[2] = param_2[2] + uVar11;
      param_2[3] = param_2[3] + uVar10;
      param_2[4] = param_2[4] + local_68;
      param_2[5] = param_2[5] + local_78;
      param_2[6] = param_2[6] + uVar8;
      param_2[7] = param_2[7] + uVar7;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

