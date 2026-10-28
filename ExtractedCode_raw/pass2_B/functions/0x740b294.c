// rea decompile_all
// name: Mono.Security.Authenticode.AuthenticodeBase$$GetHash
// address: 0x740b294
// body: available
// range: 0x740b294-0x740b72b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x740b724 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x740b728 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 Mono_Security_Authenticode_AuthenticodeBase__GetHash(long param_1,long *param_2)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  long *plVar5;
  undefined8 uVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  long lVar10;
  ulong uVar11;
  
  if ((DAT_09520ee1 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917fc88);
    DAT_09520ee1 = 1;
  }
  if (*(int *)(param_1 + 0x20) < 1) {
    Mono_Security_Authenticode_AuthenticodeBase__ReadFirstBlock(param_1);
  }
  plVar5 = *(long **)(param_1 + 0x18);
  if (plVar5 == (long *)0x0) goto LAB_0740b724;
  (**(code **)(*plVar5 + 0x218))
            (plVar5,(long)*(int *)(param_1 + 0x24),*(undefined8 *)(*plVar5 + 0x220));
  iVar7 = *(int *)(param_1 + 0x2c);
  if (iVar7 < 1) {
    if (0 < *(int *)(param_1 + 0x34)) {
      lVar10 = *(long *)(param_1 + 0x10);
      if (*(int *)(param_1 + 0x20) < 1) {
        Mono_Security_Authenticode_AuthenticodeBase__ReadFirstBlock(param_1);
      }
      if (lVar10 == 0) goto LAB_0740b724;
      uVar1 = *(int *)(param_1 + 0x28) + 0xc;
      if (*(uint *)(lVar10 + 0x18) <= uVar1) {
LAB_0740b728:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      *(undefined1 *)(lVar10 + (int)uVar1 + 0x20) = 0;
      lVar10 = *(long *)(param_1 + 0x10);
      if (*(int *)(param_1 + 0x20) < 1) {
        Mono_Security_Authenticode_AuthenticodeBase__ReadFirstBlock(param_1);
      }
      if (lVar10 == 0) goto LAB_0740b724;
      uVar1 = *(int *)(param_1 + 0x28) + 0xd;
      if (*(uint *)(lVar10 + 0x18) <= uVar1) goto LAB_0740b728;
      *(undefined1 *)(lVar10 + (int)uVar1 + 0x20) = 0;
      lVar10 = *(long *)(param_1 + 0x10);
      if (*(int *)(param_1 + 0x20) < 1) {
        Mono_Security_Authenticode_AuthenticodeBase__ReadFirstBlock(param_1);
      }
      if (lVar10 == 0) goto LAB_0740b724;
      uVar1 = *(int *)(param_1 + 0x28) + 0xe;
      if (*(uint *)(lVar10 + 0x18) <= uVar1) goto LAB_0740b728;
      *(undefined1 *)(lVar10 + (int)uVar1 + 0x20) = 0;
      lVar10 = *(long *)(param_1 + 0x10);
      if (*(int *)(param_1 + 0x20) < 1) {
        Mono_Security_Authenticode_AuthenticodeBase__ReadFirstBlock(param_1);
      }
      if (lVar10 == 0) goto LAB_0740b724;
      uVar1 = *(int *)(param_1 + 0x28) + 0xf;
      if (*(uint *)(lVar10 + 0x18) <= uVar1) goto LAB_0740b728;
      *(undefined1 *)(lVar10 + (int)uVar1 + 0x20) = 0;
      lVar10 = *(long *)(param_1 + 0x10);
      if (*(int *)(param_1 + 0x20) < 1) {
        Mono_Security_Authenticode_AuthenticodeBase__ReadFirstBlock(param_1);
      }
      if (lVar10 == 0) goto LAB_0740b724;
      uVar1 = *(int *)(param_1 + 0x28) + 0x10;
      if (*(uint *)(lVar10 + 0x18) <= uVar1) goto LAB_0740b728;
      *(undefined1 *)(lVar10 + (int)uVar1 + 0x20) = 0;
      lVar10 = *(long *)(param_1 + 0x10);
      if (*(int *)(param_1 + 0x20) < 1) {
        Mono_Security_Authenticode_AuthenticodeBase__ReadFirstBlock(param_1);
      }
      if (lVar10 == 0) goto LAB_0740b724;
      uVar1 = *(int *)(param_1 + 0x28) + 0x11;
      if (*(uint *)(lVar10 + 0x18) <= uVar1) goto LAB_0740b728;
      *(undefined1 *)(lVar10 + (int)uVar1 + 0x20) = 0;
      lVar10 = *(long *)(param_1 + 0x10);
      if (*(int *)(param_1 + 0x20) < 1) {
        Mono_Security_Authenticode_AuthenticodeBase__ReadFirstBlock(param_1);
      }
      if (lVar10 == 0) goto LAB_0740b724;
      uVar1 = *(int *)(param_1 + 0x28) + 0x12;
      if (*(uint *)(lVar10 + 0x18) <= uVar1) goto LAB_0740b728;
      *(undefined1 *)(lVar10 + (int)uVar1 + 0x20) = 0;
      lVar10 = *(long *)(param_1 + 0x10);
      if (*(int *)(param_1 + 0x20) < 1) {
        Mono_Security_Authenticode_AuthenticodeBase__ReadFirstBlock(param_1);
      }
      if (lVar10 == 0) goto LAB_0740b724;
      uVar1 = *(int *)(param_1 + 0x28) + 0x13;
      if (*(uint *)(lVar10 + 0x18) <= uVar1) goto LAB_0740b728;
      *(undefined1 *)(lVar10 + (int)uVar1 + 0x20) = 0;
      iVar7 = *(int *)(param_1 + 0x34);
      goto LAB_0740b4d8;
    }
    plVar5 = *(long **)(param_1 + 0x18);
    if (plVar5 == (long *)0x0) goto LAB_0740b724;
    uVar3 = (**(code **)(*plVar5 + 0x1f8))(plVar5,*(undefined8 *)(*plVar5 + 0x200));
    plVar5 = *(long **)(param_1 + 0x18);
    if (plVar5 == (long *)0x0) goto LAB_0740b724;
    uVar1 = 0;
    if ((uVar3 & 7) != 0) {
      uVar1 = 8 - (uVar3 & 7);
    }
    lVar10 = (**(code **)(*plVar5 + 0x1f8))(plVar5,*(undefined8 *)(*plVar5 + 0x200));
    uVar11 = lVar10 - *(int *)(param_1 + 0x24);
  }
  else {
LAB_0740b4d8:
    if (iVar7 < *(int *)(param_1 + 0x24)) {
      uVar11 = 0;
      *(int *)(param_1 + 0x24) = iVar7;
    }
    else {
      uVar11 = (ulong)(iVar7 - *(int *)(param_1 + 0x24));
    }
    uVar1 = 0;
  }
  if (param_2 != (long *)0x0) {
    iVar7 = *(int *)(param_1 + 0x28);
    System_Security_Cryptography_HashAlgorithm__TransformBlock
              (param_2,*(undefined8 *)(param_1 + 0x10),0,iVar7 + 0x58,
               *(undefined8 *)(param_1 + 0x10),0,0);
    bVar2 = *(char *)(param_1 + 0x38) != '\0';
    uVar8 = 0x3c;
    if (bVar2) {
      uVar8 = 0x4c;
    }
    iVar9 = 0xa0;
    if (bVar2) {
      iVar9 = 0xb0;
    }
    System_Security_Cryptography_HashAlgorithm__TransformBlock
              (param_2,*(undefined8 *)(param_1 + 0x10),iVar7 + 0x5c,uVar8,
               *(undefined8 *)(param_1 + 0x10),iVar7 + 0x5c,0);
    iVar7 = iVar7 + iVar9;
    uVar6 = *(undefined8 *)(param_1 + 0x10);
    uVar3 = *(int *)(param_1 + 0x24) - iVar7;
    if (uVar11 != 0) {
      System_Security_Cryptography_HashAlgorithm__TransformBlock
                (param_2,uVar6,iVar7,uVar3,uVar6,iVar7,0);
      bVar2 = (uVar11 & 0xfff) == 0;
      uVar3 = 0x1000;
      if (!bVar2) {
        uVar3 = (uint)uVar11 & 0xfff;
      }
      if (0 < (long)(((long)uVar11 >> 0xc) - (ulong)bVar2)) {
        uVar11 = (((long)uVar11 >> 0xc) - (ulong)bVar2) + 1;
        do {
          lVar10 = *(long *)(param_1 + 0x10);
          if ((lVar10 == 0) || (plVar5 = *(long **)(param_1 + 0x18), plVar5 == (long *)0x0))
          goto LAB_0740b724;
          (**(code **)(*plVar5 + 0x368))
                    (plVar5,lVar10,0,*(undefined4 *)(lVar10 + 0x18),*(undefined8 *)(*plVar5 + 0x370)
                    );
          lVar10 = *(long *)(param_1 + 0x10);
          if (lVar10 == 0) goto LAB_0740b724;
          System_Security_Cryptography_HashAlgorithm__TransformBlock
                    (param_2,lVar10,0,*(undefined4 *)(lVar10 + 0x18),lVar10,0,0);
          uVar11 = uVar11 - 1;
        } while (1 < uVar11);
      }
      plVar5 = *(long **)(param_1 + 0x18);
      if (plVar5 == (long *)0x0) goto LAB_0740b724;
      uVar4 = (**(code **)(*plVar5 + 0x368))
                        (plVar5,*(undefined8 *)(param_1 + 0x10),0,uVar3,
                         *(undefined8 *)(*plVar5 + 0x370));
      if (uVar4 != uVar3) {
        return 0;
      }
      uVar6 = *(undefined8 *)(param_1 + 0x10);
      if ((int)uVar1 < 1) {
        iVar7 = 0;
      }
      else {
        System_Security_Cryptography_HashAlgorithm__TransformBlock(param_2,uVar6,0,uVar3,uVar6,0,0);
        uVar6 = FUN_03f5c394(DAT_0917fc88,uVar1);
        iVar7 = 0;
        uVar3 = uVar1;
      }
    }
    System_Security_Cryptography_HashAlgorithm__TransformFinalBlock(param_2,uVar6,iVar7,uVar3,0);
                    /* WARNING: Could not recover jumptable at 0x0740b720. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar6 = (**(code **)(*param_2 + 0x1e8))(param_2,*(undefined8 *)(*param_2 + 0x1f0));
    return uVar6;
  }
LAB_0740b724:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

